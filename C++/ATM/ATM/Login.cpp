#include "lbf.h"            /*将节点的余额通过调用成员函数存入文件*/

void Login(ATM *Phead)      /*登陆函数*/
{
    ATM *P1 = Phead->Pnext; /*将头结点的下一个节点的地址拷贝到P1*/
    int Choice = 0;         /*声明一个整形变量作为编号*/
    if(P1 != NULL)          /*如果链表存在*/
    {
        cout<<"请输入您的账号:";            /*输出*/
        cin>>Choice;                        /*输入*/
        if(Choice > 0)                      /*输入的编号大于0*/
        {
            while(P1->Pnext != NULL)        /*未循环到最后一个节点*/
            {
                if(P1->Number == Choice)    /*节点的编号等于输入的编号*/
                {
                    break;                  /*跳出循环*/
                }
                P1 = P1->Pnext;             /*使节点进位*/
            }
            if(Choice <= P1->Count)         /*输入的编号存在*/
            {
                Login_one(P1, Phead);       /*进入登陆1函数*/
            }
            else                    /*输入的编号不存在*/
            {
                Sleep(700);         /*延时0.7秒*/
                system("cls");      /*清屏*/
                cerr<<"该账户不存在,返回主页面"<<endl;     /*错误输出*/
                system("pause");    /*暂停*/
                Frist(Phead);       /*调用首页函数*/
            }
        }
        else                        /*输入的编号小于0*/
        {
            Sleep(700);             /*延时0.7秒*/
            system("cls");          /*清屏*/
            cerr<<"账号为大于0的数字,请重新输入"<<endl;     /*错误输出*/
            system("pause");        /*暂停*/
            Login(Phead);           /*调用登陆函数*/
        }
    }
    else                            /*如果链表不存在*/
    {
        Sleep(700);                 /*延时0.7秒*/
        system("cls");              /*清屏*/
        cerr<<"未注册账户,返回主页面"<<endl;      /*错误输出*/
        system("pause");            /*暂停*/
        Frist(Phead);               /*调用首页函数*/
    }
}

void Login_one(ATM *P1, ATM *Phead)
{
    string string_R = "      ";   /*定义一个string类对象作为密码输入*/
    int i = 0;                      /*定义一个整形变量作为计数*/
    static int Choice_cc = 0;       /*定义一个静态变量获取字符*/
    static int Count = 2;           /*定义一个静态变量做三次密码循环用*/
    if(P1->State == 1)              /*节点的状态正常State = 1*/
    {
        if(Choice_cc)               /*Choice_cc不为0*/
            Choice_cc = getch();    /*获取一个字符*/
        cout<<"按ESC退出,其余按键继续\n";    /*输出*/
        if((Choice_cc = getch()) == 27)      /*键入一个字符,如果字符的ASCII码为27*/
        {
            system("pause");                 /*暂停*/
            Count = 2;                       /*重新计数三次*/
            Frist(Phead);                    /*调用首页函数*/
        }
        cout<<"请输入您的密码:";             /*输出*/
        for(i = 0; i < 6;)                   /*6次循环*/
        {
            string_R[i] = getch();         /*输入一个字符到string_R[i]*/
            if((string_R[i] >= '0' && string_R[i] <= '9') || string_R[i] == '\b')/*如果键入的字符在0~9之间或者回车符*/
            {
                if(string_R[i] == '\b' && i > 0)  /*如果输入的是回车符且i>0*/
                {
                    cout<<'\b'<<' '<<'\b';          /*删除一个字符*/
                    i--;                            /*i自减*/
                    continue;                       /*进行下一次循环*/
                }
                cout<<"*";      /*输出*隐藏数字*/
                i++;            /*i自加*/
            }
        }
        cout<<endl;             /*输出*/
        Sleep(700);             /*延时0.7秒*/

        if(string_R.compare(P1->_Password()) == 0)        /*如果两个对象中的内容相同*/
        {
            cout<<endl<<"账号密码正确,进入功能界面"<<endl;  /*输出*/
            Count = 2;          /*重新计数*/
            system("pause");    /*暂停*/
            Function(P1, Phead);/*调用功能函数*/
        }
        else                    /*两个对象中的内中不相同*/
        {
            if(Count > 0)       /*如果还有输入密码的机会*/
            {
                Sleep(700);     /*延时0.7秒*/
                system("cls");  /*暂停*/
                cerr<<"密码错误请重新输入,您还有"<<Count--<<"次机会"<<endl<<endl;  /*输出*/
                Login_one(P1, Phead);       /*调用功能函数*/
            }
            else                /*没有输入机会*/
            {
                Sleep(700);     /*延时0.7秒*/
                system("cls");  /*清屏*/
                cerr<<"您的账户已锁定,请联系管理员解锁"<<endl; /*清屏*/
                Count = 2;      /*重新计数三次*/
                P1->State = 0;  /*使账号的状态为0，State = 0*/
                system("pause");/*暂停*/
            }
        }
    }
    else                    /*节点的状态正常State = 0*/
    {
        Sleep(700);         /*延时0.7秒*/
        system("cls");      /*清屏*/
        cerr<<"该账户已锁定,返回上一页"<<endl; /*输出*/
        system("pause");    /*暂停*/
        system("cls");      /*清屏*/
        Frist(Phead);       /*调用首页函数*/
    }
}
