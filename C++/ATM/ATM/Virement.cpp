#include "lbf.h"                        /*调用自定义库函数lbf.h*/

void Virement(ATM *P1, ATM *Phead)      /*调用转账函数*/
{
    int Number_V = 0;                   /*定义一个整形变量作为账号选择*/
    cout<<"请输入想要转账的账号:";      /*输出*/
    cin>>Number_V;                      /*输入账号*/

    if(Number_V <= P1->Count)           /*账号存在*/
    {
        ATM *P2 = Phead;                /*将头结点的地址拷贝给P2*/
        while(P2 != NULL)               /*如果P2的地址不为空*/
        {
            if(P2->Number == Number_V)  /*如果找到账号*/
            {
                break;                  /*退出循环*/
            }
            P2 = P2->Pnext;             /*使P2进位*/
        }
        if(P2->Number != P1->Number)    /*找到账号且不等于本账号*/
        {
            Sleep(700);                 /*延时0.7秒*/
            system("cls");              /*清屏*/
            system("pause");            /*暂停*/
            Virement_one(P1, P2, Phead);/*调用转账1函数*/
        }
        else                            /*找到账号且等于本账号*/
        {
            Sleep(700);                 /*延时0.7秒*/
            system("cls");              /*清屏*/
            cerr<<"禁止给自己转账"<<endl;  /*错误输出*/
            system("pause");            /*暂停*/
            system("cls");              /*清屏*/
            Virement(P1, Phead);        /*调用转账函数*/
        }

    }
    else                                /*账号不存在*/
    {
        Sleep(700);         /*延时0.7秒*/
        system("cls");      /*清屏*/
        cerr<<"该账户不存在,返回上一页"<<endl; /*错误输出*/
        system("pause");    /*暂停*/
        Function(P1, Phead);/*调用功能函数*/
    }
}

void Virement_one(ATM *P1, ATM *P2, ATM *Phead) /*转账1函数*/
{
    double Balance_Vi = 0;                      /*定义一个整形变量作为输入转账金额*/
    cout<<"转账金额只能为100面值"<<endl<<endl;  /*输出*/
    cout<<"您要转账的金额:";                    /*输出*/
    cin>>Balance_Vi;            /*输出转账金额*/

    if(Balance_Vi > 0)          /*转账金额大于0*/
    {
        if((long int)Balance_Vi % 100 == 0)     /*输入的金额为100的整数倍*/
        {
            if(Balance_Vi > P1->_Balance())     /*如果取款金额大于余额*/
            {
                Sleep(700);         /*延时0.7秒*/
                system("cls");      /*清屏*/
                cerr<<"余额不足,返回上一页"<<endl;       /*错误输出*/
                system("pause");    /*暂停*/
                system("cls");      /*清屏*/
                Function(P1, P2);   /*调用功能函数*/
            }
            else            /*如果取款金额小于余额*/
            {
                Sleep(700);         /*延时0.7秒*/
                SYSTEMTIME time;    /*声明一个系统时间的结构体*/
                GetLocalTime(&time);/*调用本地时间*/
                std::ofstream pt(P1->file.c_str(), std::ios_base::app);/*以续写方式打开文件*/
                pt<<time.wYear<<"年"<<time.wMonth<<"月"<<time.wDay    /*内容输出到文件*/
                <<"日"<<time.wHour<<"时"<<time.wMinute<<"分"<<time.wSecond<<"秒-------------";/*内容输出到文件*/
                pt<<"转账给 ["<<P2->_Name()<<"] "<<Balance_Vi<<" 元*"<<endl;/*内容输出到文件*/
                pt.close();         /*关闭文件*/
                std::ofstream pp(P2->file.c_str(), std::ios_base::app);/*以续写方式打开文件*/
                pp<<time.wYear<<"年"<<time.wMonth<<"月"<<time.wDay    /*内容输出到文件*/
                <<"日"<<time.wHour<<"时"<<time.wMinute<<"分"<<time.wSecond<<"秒-------------";/*内容输出到文件*/
                pp<<"["<<P1->_Name()<<"] 转账进"<<Balance_Vi<<" 元*"<<endl;/*内容输出到文件*/
                pp.close();         /*关闭文件*/
                system("cls");      /*清屏*/
                cout<<"转账成功"<<endl;     /*输出*/
                P1->Balance_reduce(Balance_Vi);     /*将输入得取款金额通过调用成员函数减到余额*/
                P2->Balance_plus(Balance_Vi);       /*将输入得取款金额通过调用成员函数加到余额*/
                system("pause");            /*暂停*/
            }
        }
        else            /*输入的金额不为100的整数倍*/
        {
            Sleep(700);         /*延时0.7秒*/
            system("cls");      /*清屏*/
            Virement_one(P1, P2, Phead);        /*调动转账1函数*/
        }

    }
    else        /*转账金额小于0*/
    {
        Sleep(700);             /*延时0.7秒*/
        system("cls");          /*清屏*/
        cerr<<"转账金额需为100面值及以上"<<endl;   /*错误输出*/
        system("pause");        /*暂停*/
        system("cls");          /*清屏*/
        Function(P1, Phead);    /*调用功能函数*/
    }
}
