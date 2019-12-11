#include <reg51.h>

#define Forword 		0xf9		   	//1111_1001		前进
#define Forword_left 	0xfa			//1111_1010		左转
#define Forword_right 	0xf5			//1111_0101		右转
#define Rotate_left 	0xf2			//1111_0010		以左为中心左旋
#define Rotate_right 	0xf4			//1111_0100		以右为中心右旋
#define Back		 	0xf6			//1111_0110		后退
#define Stop			0xf0		  	//1111_0000		停止
#define uc 				unsigned int
#define	ui			 	unsigned char

sbit 	IN1 = P0 ^ 0;
sbit 	IN2 = P0 ^ 1;
sbit 	IN3 = P0 ^ 2;
sbit 	IN4 = P0 ^ 3;
sbit 	EWA = P0 ^ 4;
sbit 	EWB = P0 ^ 5;
sbit	PWM1 = P0 ^ 6;
sbit	PWM2 = P0 ^ 7;
sfr  	AUXR = 0x8e;
sfr  	IPH = 0xb7;
uc		a = 3, b = 0, c = 5, d = 0, temp;
ui		PWMCNT1 = 0;
ui		CNTPWM1 = 60;
ui		PWMCNT2 = 0;
ui		CNTPWM2 = 60;
uc		bluetoothdata;

void inittial_myself();
void initial_interrupt();
void delayed(unsigned int time);
void bluetooth_control();
void user_receive();

void main()
{
	P2 = 0xf6;
}

void inittial_myself()
{
	SCON = 0x50;	 			//0101_0000 方式1,波特率可变			 
	TMOD = 0x21;				//0010_0001	(1定时器 方式2,0定时器 方式1)
	TH0 = (65536 - 50) / 256;	// 定时 50 微秒
	TL0 = (65536 - 50) % 256;
	TH1 = 0xfd;				//波特率9600
	TL1 = 0xfd;
	IP = 0x10;
}

void initial_interrupt()
{
	EA = 1;		// 开总中断
	ES = 1;		// 开串口中断
	ET0 = 1;		//开定时器 0 中断 
	TR0 = 1;		//开定时器 0
	TR1 = 1;		// 开定时器 1
}

void delayed(unsigned int time)		  	//延时子程序
{
	unsigned int i = 0;
	unsigned int j = 0;
	for (i = 0; i < time; i++)
	{
		for (j = 0; j < 500; j++)
			;
	}
}

void user_receive() interrupt 4 // 串口中断程序
{
	if (RI == 1)					// 收到字符
	{
		RI = 0;					//软件清零
		bluetoothdata = SBUF;	// 读取数据
	}
	if (TI == 1)					// 发送数据
	{
		TI = 0;					// 清零
	}
}

void T0_time() interrupt 1 // 定时器 1
{
	PWMCNT1++;
	PWMCNT2++;
	if (PWMCNT1 >= 200)
	{
		PWMCNT1 = 1;
	}
	if (PWMCNT1 <= CNTPWM1) //230
	{
		PWM1 = 1;
	}
	else
	{
		PWM1 = 0;
	}
	if (PWMCNT2 >= 200)
	{
		PWMCNT2 = 1;
	}
	if (PWMCNT1 <= CNTPWM2) //230
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

void bluetooth_control()
{
	switch (bluetoothdata)
	{
	case 'f':go_forward();
		delay_long(100);
		SBUF = 'f';//返回数据到手机
		bluetoothdata = 'a';
		break;
	case 's':stop();
		delay_long(100);
		SBUF = 's';
		bluetoothdata = 'a';
		break;
	case 'r':turn_right();
		delay_long(100);
		SBUF = 'r';
		bluetoothdata = 'a';
		break;
	case 'l':turn_left();
		delay_long(100);
		SBUF = 'l';
		bluetoothdata = 'a';
		break;
	case 'b':back();
		delay_long(100);
		SBUF = 'b';
		bluetoothdata = 'a';
		break;
	case '1':cntPWM1 = 60;
		cntPWM2 = 60;
		delay_long(100);
		SBUF = '1';
		bluetoothdata = 'a';
		break;
	case '2':cntPWM1 = 100;
		cntPWM2 = 100;
		delay_long(100);
		SBUF = '2';
		bluetoothdata = 'a';
		break;
	case '3':cntPWM1 = 140;
		cntPWM2 = 140;
		delay_long(100);
		SBUF = '3';
		bluetoothdata = 'a';
		break;
	}
}