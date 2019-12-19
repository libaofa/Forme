/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   rtc 测试，显示时间格式为: xx:xx:xx
  ******************************************************************************
  * @attention
  *
  * 实验平台:秉火 F103-指南者 STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
#include "stm32f10x.h"
#include "./usart/bsp_usart.h"
#include "./rtc/bsp_rtc.h"
#include "./lcd/bsp_ili9341_lcd.h"
#include "./key/bsp_key.h"  
#include "./beep/bsp_beep.h" 
#include "./color_led/bsp_color_led.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.1415926

static void LCD_Test(struct rtc_time tm);	
static void Delay ( __IO uint32_t nCount );
void Printf_Charater(void)   ;


// N = 2^32/365/24/60/60 = 136 年

/*时间结构体，默认时间2000-01-01 00:00:00*/
struct rtc_time systmtime=
{
0,0,0,1,1,2000,0
};

/*时间结构体，闹钟时间2000-01-01 00:01:00*/
struct rtc_time clocktime=
{
30,0,0,1,1,2000,0
};
float temp_s=-1,temp_m=-1,temp_h=-1;
int sec_1 = 0;

extern __IO uint32_t TimeDisplay ;
extern __IO uint32_t TimeAlarm ;

void Time_Display1(uint32_t TimeVar,struct rtc_time *tm, struct rtc_time *tm1)
{
	   //static uint32_t FirstDisplay = 1;
	   uint32_t BJ_TimeVar;
	   uint8_t str[200]; // 字符串暂存  	

	   /*  把标准时间转换为北京时间*/
	   BJ_TimeVar =TimeVar + TIME_ZOOM;

	   to_tm(BJ_TimeVar, tm);/*把定时器的值转换为北京时间*/	
	
		
#ifdef  USE_LCD_DISPLAY
		LCD_SetFont(&Font16x24);
		
		LCD_SetTextColor(RED);
		sprintf((char *)str,"    %0.2d:%0.2d:%0.2d",tm1->tm_hour, 									
																						tm1->tm_min, 
																						tm1->tm_sec);
		
		ILI9341_DispStringLine_EN(LINE(1),(char*)str);
	
	
		LCD_SetTextColor(GREEN);
		sprintf((char *)str,"    %0.2d:%0.2d:%0.2d",tm->tm_hour, 									
																						tm->tm_min, 
																						tm->tm_sec);
		
		ILI9341_DispStringLine_EN(LINE(12),(char*)str);
		
		
#endif
}	
	
	
int main()
{		
	int flag = 0;
	int alarm_flag = 0;
	int color_flag = 0;
	char str[10];
	uint32_t clock_timestamp;
	//uint32_t current_timestamp;
	
//可使用该宏设置是否使用液晶显示
#ifdef  USE_LCD_DISPLAY
	
		ILI9341_Init ();         //LCD 初始化
		LCD_SetFont(&Font8x16);
		LCD_SetColors(RED,BLACK);

		ILI9341_Clear(0,0,LCD_X_LENGTH,LCD_Y_LENGTH);	/* 清屏，显示全黑 */

#endif
	
	  USART_Config();			
	
		Key_GPIO_Config();
	
		BEEP_GPIO_Config();
		COLOR_TIMx_LED_Init();
		
		/* 配置RTC秒中断优先级 */
	  RTC_NVIC_Config();
	  RTC_CheckAndConfig(&systmtime);
	
		
		/*设置闹钟寄存器*/
		clock_timestamp = mktimev(&clocktime)-TIME_ZOOM;
		RTC_SetAlarm(clock_timestamp);
		LCD_SetFont(&Font16x24);
		LCD_SetTextColor(WHITE);
		sprintf((char *)str,"%0.2d",sec_1);	
		ILI9341_DispStringLine_EN(LINE(0),(char*)str);
	  while (1)
	  {
				/* 每过1s 更新一次时间*/
				if (TimeDisplay == 1)
				{
						/* 当前时间 */
						Time_Display1( RTC_GetCounter(),&systmtime,&clocktime); 	
						LCD_Test(systmtime);
						TimeDisplay = 0;
				}
			
				//按下按键，通过串口修改时间system
				if( Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) == KEY_ON  )
				{
						struct rtc_time set_time;

						/*使用串口接收设置的时间，输入数字时注意末尾要加回车*/
						Time_Regulate_Get(&set_time);
						/*用接收到的时间设置RTC*/
						Time_Adjust(&set_time);
						//systmtime=set_time;
						//向备份寄存器写入标志
						BKP_WriteBackupRegister(RTC_BKP_DRX, RTC_BKP_DATA);

				} 
				
				//按下按键，通过串口修改时间alarm
				if( Key_Scan(KEY2_GPIO_PORT,KEY2_GPIO_PIN) == KEY_ON  )
				{
						struct rtc_time set_time_alarm;

						/*使用串口接收设置的时间，输入数字时注意末尾要加回车*/
						Time_Regulate_Get_alarm(&set_time_alarm);
						/*用接收到的时间设置RTC*/
						clocktime=set_time_alarm;
						//向备份寄存器写入标志
						/*设置闹钟寄存器*/
						USART_Config();			
						Key_GPIO_Config();
						BEEP_GPIO_Config();
						clock_timestamp = mktimev(&clocktime)-TIME_ZOOM;
						RTC_SetAlarm(clock_timestamp);
						BKP_WriteBackupRegister(RTC_BKP_DRX, RTC_BKP_DATA);
				} 
			
				if(clocktime.tm_hour == systmtime.tm_hour &&
							clocktime.tm_min == systmtime.tm_min &&
									clocktime.tm_sec == systmtime.tm_sec)
						TimeAlarm = 1;
				//响铃
				/*if(sec_1 > 10 && sec_1 <=20)
				{
						sec_1 = 0;
						TimeAlarm = 0;
						color_flag = 0;
						BEEP(OFF);
				}*/
				
				if( TimeAlarm == 1)
				{
						if(0 == sec_1%10)
								alarm_flag = !alarm_flag;
						
						if(alarm_flag)
						{
								if(flag)
									BEEP(ON);
								else
									BEEP(OFF);
								// 开启GPIOB 端口时钟
								if(color_flag == 5)
										color_flag = 0;
								color_flag++;
								switch(color_flag)
								{
									case 1:	SetRGBColor(0x8080ff);	break;							
									case 2:	SetRGBColor(0xff8000);	break;
									case 3:	SetRGBColor(0xffc90e);	break;
									case 4:	SetColorValue(181,230,29);	break;
									case 5:	SetColorValue(255,128,64);	break;
								}
								flag=!flag;
						}
						else
						{
								BEEP(OFF);
								SetColorValue(0,0,0);
						}
						
						sprintf((char *)str,"%0.2d",sec_1);	
				}
				else
				{
						color_flag = 0;
						sec_1=0;
						sprintf((char *)str,"%0.2d",sec_1);	
				}
				LCD_SetTextColor(WHITE);
				LCD_SetFont(&Font16x24);
				ILI9341_DispStringLine_EN(LINE(0),(char*)str);
	  }
}

void LCD_Test(struct rtc_time tm)
{
	float s, m1, h1, n, z1 = 0;
	int h, m;
	static uint8_t testCNT = 0;	
	
	testCNT++;	
	
	LCD_SetFont(&Font8x16);
	LCD_SetColors(BLACK,BLACK);

	LCD_SetFont(&Font16x24);
	LCD_SetTextColor(GREEN);

	LCD_SetFont(&Font24x32);
  
	LCD_SetTextColor(YELLOW);
  ILI9341_DrawCircle(120,160,105,0);
	LCD_SetTextColor(YELLOW);
  ILI9341_DrawCircle(120,160,100,0);
	
	for(n = 0; n < 2*PI; n=n+PI/6)
	{
			LCD_SetTextColor(YELLOW);
			ILI9341_DrawCircle(120+90*cos(-n),160+90*sin(-n),5,1);
	}
	
	h=tm.tm_hour;
	m=tm.tm_min;
	s=tm.tm_sec;
	h1=(h+(m*60+s)/3600)*PI/6-PI/2;
	m1=(m+s/60)*(PI/30)-PI/2;
	
	
	if(temp_s!=-1&&temp_m!=-1&&temp_h!=-1)
	{
			LCD_SetTextColor(BLACK);			//SHI
			ILI9341_DrawLine(120,160,120+45*cos(temp_h),160+45*sin(temp_h));
			LCD_SetTextColor(BLACK);			//FEN
			ILI9341_DrawLine(120,160,120+60*cos(temp_m),160+60*sin(temp_m));
			LCD_SetTextColor(BLACK);				//MIAO
			ILI9341_DrawLine(120,160,120+75*cos((temp_s)*(PI/30)-PI/2),160+75*sin((temp_s)*(PI/30)-PI/2));
	}
	

	/****************/
	LCD_SetTextColor(YELLOW);			//SHI
  ILI9341_DrawLine(120,160,120+45*cos(h1),160+45*sin(h1));
	LCD_SetTextColor(CYAN);
	z1 = tm.tm_hour*PI/6;
	ILI9341_DrawCircle(120+90*cos(z1-PI/2),160+90*sin(z1-PI/2),5,1);
	LCD_SetTextColor(GREEN);			//FEN
  ILI9341_DrawLine(120,160,120+60*cos(m1),160+60*sin(m1));
	LCD_SetTextColor(RED);				//MIAO
  ILI9341_DrawLine(120,160,120+75*cos((s)*(PI/30)-PI/2),160+75*sin((s)*(PI/30)-PI/2));
	
	/*保存状态*/
	temp_s=s;
	temp_m=m1;
	temp_h=h1;
	/**************/
  
	Delay(0x4FFFFF);
  //ILI9341_Clear(0,16*8,LCD_X_LENGTH,LCD_Y_LENGTH-16*8);	// ??
	//ILI9341_Clear(0,0,LCD_X_LENGTH,LCD_Y_LENGTH);	/* 清屏，显示全黑 */
		if( TimeAlarm == 1)
				sec_1++;
}

static void Delay ( __IO uint32_t nCount )
{
  for ( ; nCount != 0; nCount -- );
	
}



/***********************************END OF FILE*********************************/

