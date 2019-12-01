#include "lbf.h"                /*调用自定义库函数lbf.h*/

void Manage(ATM *P, ATM *Phead) /*账号管理函数*/
{
    int Number_M = 0;           /*定义一个整形变量作为账号选择*/
    ATM *P2 = P;                /*p2保存头结点的尾指针地址*/
    ATM *D2 = Phead;            /*D2保存头结点的地址*/
    int i = 0;                  /*定义一个整形变量作为计数*/
    int flag = 1;               /*定义一个整形变量作为退出循环的标志*/
    int Choice = 0;             /*定义一个整形变量用来获取字符*/
    string string_M = "      "; /*定义一个string类对象作为输入管理员密码*/

    cout<<"编号"<<'\t'<<'\t';         /*输出*/
    cout<<"状态"<<'\t'<<'\t'<<'\t';   /*输出*/
    cout<<"余额"<<'\t'<<'\t'<<'\t';   /*输出*/
    cout<<"密码"<<'\t'<<'\t'<<'\t';   /*输出*/
    cout<<"用户名"<<endl;             /*输出*/
    cout<<"_________________________________";  /*输出*/
    cout<<"_________________________________";  /*输出*/
    cout<<"_________________________________"<<endl;    /*输出*/
    ATM *P1 = P;                /*保存P节点*/
    while(P1 != NULL)           /*P1的地址不为空*/
    {
        P1->show_1();           /*输出隐藏形式的信息*/
        P1 = P1->Pnext;         /*使p1进位*/
    }
    cout<<"_________________________________";      /*输出*/
    cout<<"_________________________________";      /*输出*/
    cout<<"_________________________________"<<endl;/*输出*/
    cout<<endl<<"1.显示"<<endl;       /*输出*/
    cout<<"2.取消"<<endl;             /*输出*/
    cout<<"请输入您的选择:_____"<<'\b'<<'\b'<<'\b'; /*输出*/
    while(flag)     /*flag为1则是死循环*/
    {
        Choice = getch();       /*获取一个在字符*/
        if(Choice >= 49 && Choice<= 50) /*输入的字符的ASCII码在49~50之间*/
        {
            flag = 0;           /*令flag = 0*/
            Choice -= 48;       /*获取输入的字符的数字形式*/
            cout<<Choice<<endl; /*输出*/
        }
    }
    if(Choice == 1)         /*输入的字符为1*/
    {
        cout<<endl<<"请输入管理员密码:";        /*输出*/
        for(i = 0; i < 6;)      /*6次循环*/
        {
            string_M[i] = getch();  /*输入一个字符*/
            if((string_M[i] >= '0' && string_M[i] <= '9') || string_M[i] == '\b') /*如果键入的字符在0~9之间或者回车符*/
            {
                if(string_M[i] == '\b' && i > 0)    /*如果输入的是回车符且i>0*/
                {
                    cout<<'\b'<<' '<<'\b';  /*删除一个字符*/
                    i--;        /*i自减*/
                    continue;   /*进行下一次循环*/
                }
                cout<<"*";      /*输出*隐藏数字*/
                i++;            /*i自加*/
            }
        }
        if(string_M.compare(Phead->_Password()) == 0)   /*如果两个类对象中的内容相同*/
        {
            system("cls");          /*清屏*/
            ATM *P3 = P;            /*保存P的地址*/
            cout<<"编号"<<'\t'<<'\t';         /*输出*/
            cout<<"状态"<<'\t'<<'\t'<<'\t';   /*输出*/
            cout<<"余额"<<'\t'<<'\t'<<'\t';   /*输出*/
            cout<<"密码"<<'\t'<<'\t'<<'\t';   /*输出*/
            cout<<"用户名"<<endl;             /*输出*/
            cout<<"_________________________________";  /*输出*/
            cout<<"_________________________________";  /*输出*/
            cout<<"_________________________________"<<endl;    /*输出*/
            while(P3 != NULL)   /*P3的地址不为空*/
            {
                cout<<*P3;      /*通过重载流插入运算符输出P3的地址上的内容*/
                P3 = P3->Pnext; /*让P3进位*/
            }
            cout<<"_________________________________";  /*输出*/
            cout<<"_________________________________";  /*输出*/
            cout<<"_________________________________"<<endl;    /*输出*/
            cout<<"1:账户正常"<<'\t'<<"0:账户锁定"<<endl;/*输出*/
            cout<<endl<<"1.解锁"<<endl;                 /*输出*/
            cout<<"2.销户"<<endl;     /*输出*/
			cout<<"3.流水"<<endl;     /*输出*/
            cout<<"4.取消"<<endl;     /*输出*/
            flag = 1;                 /*令flag = 1*/
            cout<<"请输入您的选择:_____"<<'\b'<<'\b'<<'\b';    /*输出*/
            while(flag)         /*flag = 1时死循环*/
            {
                Choice = getch();   /*输入一个字符*/
                if(Choice >= 49 && Choice<= 52) /*输入的字符的ASCII码在49~50之间*/
                {
                    flag = 0;           /*令flag = 0*/
                    Choice -= 48;       /*获取输入的字符的数字形式*/
                    cout<<Choice<<endl; /*输出*/
                }
            }
			if(Choice == 3)
			{
				cout<<"_________________________________";  /*输出*/

				cout<<"_________________________________";  /*输出*/
				cout<<"_________________________________"<<endl;    /*输出*/
				std::ifstream pp( Phead->file.c_str(), std::ios_base::binary);	/*以写方式打开txt文件*/
				line li;				/*声明一个结构体变量*/
			
				while(!pp.eof())					/*未到文件尾*/
				{
					pp.read((char *)&li, sizeof(line));		/*文件读取到结构体*/
					if(pp.eof())							/*读取到文件尾*/
						break;								/*退出循环*/
					cout<<li.timer[0]<<"年"<<li.timer[1]<<"月"<<li.timer[2]<<"日---------"
						<<"入账:"<<li.a<<"元\t出账:"<<li.b<<"元\t净剩:"<<li.c<<"元"<<endl;
				}
				cout<<"_________________________________";  /*输出*/
				cout<<"_________________________________";  /*输出*/
				cout<<"_________________________________"<<endl;    /*输出*/
				cout<<"即将返回首页"<<endl;
				system("pause");
				Frist(Phead);       /*调用首页函数*/
			}
            else if(Choice == 4)         /*如果输入的字符为3*/
            {
                Sleep(700);         /*延时0.7秒*/
                Frist(Phead);       /*调用首页函数*/
            }
            else if(Choice == 2)    /*输入的字符为2*/
                cout<<endl<<"输入您想要销户的账号:";  /*输出*/
            else                    /*输入的字符为1*/
                cout<<endl<<"输入您想要解锁的账号:";  /*输出*/
            while(1)                /*死循环*/
            {
                cin>>Number_M;      /*输入账号*/
                if(cin.rdstate() == std::ios_base::goodbit) /*如果输入的格式正确*/
                    break;          /*退出循环*/
                else        /*如果输入的格式不正确*/
                {
                    cin.clear();               /*更改流输入的状态*/
                    cin.sync();                /*清除流输入缓冲区*/
                    cout<<"请输入正确数字\n";  /*输出*/
                }
            }
            if(P2 != NULL)              /*P2的地址不为空*/
            {
                if(Choice == 2)         /*如果输入的字符是2*/
                {
                    while(P2 != NULL)   /*P2的地址不为空*/
                    {
                        if(P2->Number == Number_M)  /*找到账号*/
                            break;      /*跳出循环*/
                        P2 = P2->Pnext; /*使P2进位*/
                        D2 = D2->Pnext; /*使D2进位*/
                    }
                }
                else if(Choice == 1)    /*输入的字符是1*/
                    while(P2->Pnext != NULL)    /*未循环到最后一个节点*/
                    {
                        if(P2->Number == Number_M)  /*找到账号*/
                        {
                            break;      /*跳出循环*/
                        }
                        P2 = P2->Pnext; /*使P2进位*/
                    }
            }
            if(Number_M <= P2->Count)   /*找到账号*/
            {
                if(Choice == 2)         /*输入的字符为2*/
                {
                    D2->Pnext = P2->Pnext;  /*跨过P2*/
                    delete(P2);         /*释放P2的空间*/
                    --P2->Count;        /*静态变量Count数值减一*/
                    P2 = Phead;         /*使P2保存头结点的地址*/
                    i = 0;              /*令i = 0*/
                    while(P2 != NULL)   /*P2的地址不为空*/
                    {
                        P2->Number = i++;   /*对节点进行排序*/
                        P2 = P2->Pnext;     /*节点进位*/
                    }
                    cout<<"删除成功"<<endl; /*输出*/
                    system("pause");        /*暂停*/
                    Frist(Phead);           /*调用首页函数*/
                }
                else if(Choice == 1)        /*输入的字符为1*/
                {
                    if(P2->State == 0)      /*P2的状态为0*/
                    {
                        P2->State = 1;      /*使P2的状态为1*/
                        Sleep(700);         /*延时0.7秒*/
                        cout<<"解锁成功"<<endl; /*输出*/
                        system("pause");    /*输出*/
                        Frist(Phead);       /*调用首页函数*/
                    }
                    else                /*P2的状态为1*/
                    {
                        Sleep(700);     /*延时0.7秒*/
                        cerr<<endl<<"该账号未锁定,无需解锁"<<endl;    /*错误输出*/
                        system("pause");    /*暂停*/
                        Frist(Phead);       /*调用首页函数*/
                    }
                }
            }
            else            /*未找到账号*/
            {
                Sleep(700);     /*延时0.7秒*/
                system("cls");  /*清屏*/
                cerr<<endl<<"该账户不存在,返回上一页"<<endl;   /*错误输出*/
                system("pause");/*暂停*/
                Frist(Phead);   /*调用首页函数*/
            }
        }
        else        /*如果两个类对象中的内容不相同*/
        {
            Sleep(700);     /*延时0.7秒*/
            cerr<<endl<<"管理员密码输入错误"<<endl;     /*错误输出*/
            system("pause");            /*暂停*/
            system("cls");              /*清屏*/
            Manage(Phead->Pnext, Phead);/*调用管理函数*/
        }
    }
    if(Choice == 2)     /*如果输入的字符是2*/
    {
        Sleep(700);     /*延时0.7秒*/
        Frist(Phead);   /*调用首页函数*/
    }
}
