#include "lbf.h"            /*调用自定义库函数lbf.h*/

void Withdraw_money(ATM *P1, ATM *Phead)        /*取款函数*/
{
    double Balance_Wi = 0;                      /*定义一个整形变量作为输入取款金额*/
    cout<<"取出金额只能为100面值"<<endl<<endl;  /*输出*/
    cout<<"您要取出的金额:";                    /*输出*/
    cin>>Balance_Wi;

    if(Balance_Wi > 0)                          /*如果输入金额大于0*/
    {
        if((long int)Balance_Wi % 100 == 0)     /*输入的金额不为100的整数倍*/
        {
            if(Balance_Wi > P1->_Balance())     /*如果取款金额大于余额*/
            {
                Sleep(700);                     /*延时0.7秒*/
                system("cls");                  /*清屏*/
                cerr<<"余额不足"<<endl;         /*输出*/
                system("pause");                /*暂停*/
                system("cls");                  /*清屏*/
                Function(P1, Phead);            /*调用功能函数*/
            }
            else                                /*如果取款金额小于等于余额*/
            {
                Sleep(700);                     /*延时0.7秒*/
                SYSTEMTIME time;                /*声明一个系统时间的结构体*/
                GetLocalTime(&time);            /*调用本地时间*/
                std::ofstream pt(P1->file.c_str(), std::ios_base::app);/*以续写方式打开文件*/
                pt<<time.wYear<<"年"<<time.wMonth<<"月"<<time.wDay     /*内容输出到文件*/
                <<"日"<<time.wHour<<"时"<<time.wMinute<<"分"<<time.wSecond<<"秒-------------";/*内容输出到文件*/
                pt<<"取出 "<<Balance_Wi<<" 元*"<<endl;             /*内容输出到文件*/
                pt.close();                     /*关闭文件*/
                system("cls");                  /*清屏*/
                cout<<"取出成功"<<endl;         /*输出*/
                system("pause");                /*暂停*/
                P1->Balance_reduce(Balance_Wi); /*将输入得取款金额通过调用成员函数减到余额*/
			/*--------------------------------------------------------------------------------------*/
				std::ifstream pp( Phead->file.c_str(), std::ios_base::binary);	/*以写方式打开txt文件*/
				int sum = 0;				/*判断是否跳出循环*/
				int count = 0;				/*计算位置*/
				line li;					/*声明一个结构体变量*/
				line ln;				/*姓名一个结构体变量*/
			
				while(!pp.eof())					/*未到文件尾*/
				{
					pp.read((char *)&li, sizeof(line));		/*文件读取到结构体*/
					if(pp.eof())							/*读取到文件尾*/
						break;								/*退出循环*/
					if(li.timer[0] == (long)time.wYear && li.timer[1] == (long)time.wMonth 
						&& li.timer[2] == (long)time.wDay)	/*任意一个值和时间相同且未到文件尾*/
						++sum;	/*sum自加1*/		
					else        /*不是相同时间*/
						++count;/*count自加*/
					if(sum)		/*如果sum为1*/
						break;	/*跳出循环*/
				}
				pp.close();		/*关闭文件*/
				string ff = "G:\\1编程\\C++\\vs2012\\ATM\\流水\\记录f";			/*文件地址*/
				string bb = "G:\\1编程\\C++\\vs2012\\ATM\\流水\\记录b";			/*文件地址*/
				std::ifstream pc( Phead->file.c_str(), std::ios_base::binary);	/*以写方式打开txt文件*/
				std::ofstream pf( ff, std::ios_base::binary | std::ios_base::trunc);	/*以读方式打开txt文件*/
				std::ofstream pb( bb, std::ios_base::binary | std::ios_base::trunc);	/*以读方式打开txt文件*/
				for(int i = 0; i < count; i++)			/*count次循环*/
				{
					pc.read((char *)&ln, sizeof(line));				/*文本写入结构体变量*/
					pf.write((char *)&ln, sizeof(line));			/*变量数据读入文本*/
				}
				pf.close();				/*关闭文件*/
				pc.read((char *)&li, sizeof(line));					/*文本写入结构体变量*/
				for(int i = 0; i < Phead->day-count-1; i++)			/* Phead->day-count-1次循环*/
				{
					pc.read((char *)&ln, sizeof(line));				/*文本写入结构体变量*/
					pb.write((char *)&ln, sizeof(line));			/*变量数据读入文本*/
				}
				pb.close();		/*关闭文件*/
				pc.close();		/*关闭文件*/
				if(sum)			/*sun不为0*/
				{
					li.b += (long)Balance_Wi;		/*将存入金额加到出账金额*/
					li.c = li.a-li.b;				/*获取净剩金额*/
					std::ofstream pc( Phead->file.c_str(), std::ios_base::binary | std::ios_base::trunc);	/*以读方式打开txt文件*/
					std::ifstream pf( ff, std::ios_base::binary);	/*以写方式打开txt文件*/
					std::ifstream pb( bb, std::ios_base::binary);	/*以写方式打开txt文件*/
					for(int i = 0; i < count; i++)			/*count次循环*/
					{
						pf.read((char *)&ln, sizeof(line));			/*文本写入结构体变量*/
						pc.write((char *)&ln, sizeof(line));		/*变量数据读入文本*/
					}
					pc.write((char *)&li, sizeof(line));
					for(int i = 0; i < Phead->day-count-1; i++)			/* Phead->day-count-1次循环*/
					{
						pb.read((char *)&ln, sizeof(line));			/*文本写入结构体变量*/
						pc.write((char *)&ln, sizeof(line));		/*变量数据读入文本*/
					}
					pc.close();			/*关闭文件*/
					pb.close();			/*关闭文件*/
					pf.close();			/*关闭文件*/		
				}
			}
		}
		else                /*输入的金额为100的整数倍*/
		{
			Sleep(700);     /*延时0.7秒*/
			system("cls");  /*清屏*/
			Withdraw_money(P1, Phead);      /*调用取款函数*/
		}
	}
	else                    /*如果输入金额小于0*/
	{
		Sleep(700);         /*延时0.7秒*/
		system("cls");      /*清屏*/
		cerr<<"取出金额需为100面值及以上"<<endl;       /*错误输出*/
		system("pause");    /*暂停*/
		system("cls");      /*清屏*/
		Function(P1, Phead);/*调用功能函数*/
	}
}
