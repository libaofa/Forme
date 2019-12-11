#include <reg51.h>
#define ui 				unsigned int
#define	uc			 	unsigned char

sbit 	IN1  = P1^0;
sbit 	IN2  = P1^1;
sbit 	IN3  = P1^2;
sbit 	IN4  = P1^3;
sbit 	EWA  = P1^4;
sbit 	EWB  = P1^5;
sbit	PWM1 = P1^6;
sbit	PWM2 = P1^7;
sfr  	AUXR= 0x8e;
sfr  	IPH = 0xb7;
ui		PWMCNT1 = 0;
ui		CNTPWM1 = 60;
ui		PWMCNT2 = 0;
ui		CNTPWM2 = 60;
uc		bluetoothdata;
uchar t=0; /* 中断计数器 */
uchar m1=0; /* 电机 1 速度值 */
uchar m2=0; /* 电机 2 速度值 */
uchar tmp1,tmp2; /* 电机当前速度值 */

void inittial_myself();
void initial_interrupt();
void delayed(unsigned int time);
void user_seceive();
void go_forward();
void stop();
void turn_right();
void turn_left();
void back();

void main()
{	
	inittial_myself();
	delayed(100);
	initial_interrupt();
	stop();
	while(1)
	{
		user_seceive();
	}
}

void user_seceive()
 {
  	switch(bluetoothdata)
	{
	case 'F':
	case 'f':go_forward();
		delayed(100);
		SBUF = 'f';//返回数据到手机
		break;
	case 'S':
	case 's':stop();
		delayed(100);
		SBUF = 's';
		break;	
	case 'R':			  
	case 'r':turn_right();
		delayed(100);
		SBUF = 'r';
		break;
	case 'L':												
	case 'l':turn_left();
		delayed(100);
		SBUF = 'l';
		break;
	case 'B':
	case 'b':back();
		delayed(100);
		SBUF = 'b';
		break;
	case '1':CNTPWM1 = 60;
		CNTPWM2 = 60;
		delayed(100);
		SBUF = '1';
		bluetoothdata = '1';
		break;
	case '2':CNTPWM1 = 100;
		CNTPWM2 = 100;
		delayed(100);
		SBUF = '2';
		bluetoothdata = '2';
		break;
	case '3':CNTPWM1 = 140;
		CNTPWM2 = 140;
		delayed(100);
		SBUF = '3';
		bluetoothdata = '3';
		break;
	}
 }


void user_receive(void) interrupt 4 // 串口中断程序
{
	if(RI == 1)					// 收到字符
	{
		RI = 0;					//软件清零
		bluetoothdata = SBUF;	// 读取数据
	}
	if(TI == 1)					// 发送数据
	{
		TI = 0;					// 清零
	}
}

void T0_time() interrupt 1 // 定时器 1
{
	PWMCNT1++;
	PWMCNT2++;
	if(PWMCNT1 >= 200)
	{
		PWMCNT1 = 1;
	}
	if(PWMCNT1 <= CNTPWM1) //230
	{
		PWM1 = 1;
	}
	else
	{
		PWM1 = 0;
	}
	if(PWMCNT2 >= 200)
	{
		PWMCNT2 = 1;
	}
	if(PWMCNT1 <= CNTPWM2) //230
	{
		PWM2 = 1;
	}
	else
	{
		PWM2 = 0;
	}
	TH0 = (65536 - 50) / 256;
	TL0 = (65536 - 50) % 256;
}

void inittial_myself()
{
	SCON = 0x50;	 			//0101_0000 方式1,波特率可变			 
	TMOD = 0x21;				//0010_0001	(1定时器 方式2,0定时器 方式1)
	TH0  = (65536 - 50) / 256;	// 定时 50 微秒
	TL0  = (65536 - 50) % 256;
	TH1  = 0xfd;				//波特率9600
	TL1  = 0xfd;
	IP   = 0x10;
}

void initial_interrupt()
{
	EA  = 1;		// 开总中断
	ES  = 1;		// 开串口中断
	ET0 = 1;		//开定时器 0 中断 
	TR0 = 1;		//开定时器 0
	TR1 = 1;		// 开定时器 1
}

void delayed(ui time)		  	//延时子程序
{
	ui i = 0;
	ui j = 0;
	for(i = 0; i < time; i++)
	{
	 	for(j = 0; j < 500; j++)
			;
	}
}

void go_forward()
{
	IN1 =  0;
	IN2 =  1;
	IN3 =  1;
	IN4 =  0;
}

void back()
{
	IN1 =  1;
	IN2 =  0;
	IN3 =  0;
	IN4 =  1;
}

void stop()
{

 	IN1 =  0;
	IN2 =  0;
	IN3 =  0;
	IN4 =  0;
}


void turn_left()
{
	IN1 =  0;
	IN2 =  0;
	IN3 =  1;
	IN4 =  0;

}

void turn_right()
{

	IN1 =  0;
	IN2 =  1;
	IN3 =  0;
	IN4 =  0;
}