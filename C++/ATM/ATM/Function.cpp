#include "lbf.h"                /*调用自定义库函数lbf.h*/

void Function(ATM *P1, ATM *Phead)          /*功能函数*/
{
    int Choice = 0;             /*定义整形变量作为选择*/
    int flag = 1;               /*定义整形变量作为退出循环的标志*/
    system("cls");
    cout<<'\t'<<'\t'<<"1.存款"<<endl;     /*输出*/
    cout<<'\t'<<'\t'<<"2.取款"<<endl;     /*输出*/
    cout<<'\t'<<'\t'<<"3.查询"<<endl;     /*输出*/
    cout<<'\t'<<'\t'<<"4.转账"<<endl;     /*输出*/
    cout<<'\t'<<'\t'<<"5.改密"<<endl;     /*输出*/
    cout<<'\t'<<'\t'<<"6.流水"<<endl;     /*输出*/
    cout<<'\t'<<'\t'<<"7.注销"<<endl;     /*输出*/
    cout<<endl<<"请输入您的选择:_____"<<'\b'<<'\b'<<'\b';     /*输出*/

    while(flag)                         /*死循环*/
    {
        Choice = getch();               /*输入一个字符*/
        if(Choice >= 49 && Choice <= 55)/*如果输入的字符的ascii码在49~55以内*/
        {
            flag = 0;                   /*将0赋值给flag，flag = 0是循环结束的条件*/
            Choice -= 48;               /*获取输入的数字*/
            cout<<Choice<<endl;         /*输出*/
        }
    }

    switch(Choice)                  /*分支选择语句，以Choice作为条件*/
    {
        case 1:Sleep(700);system("cls");Deposit(P1, Phead);break;             /*调用存款函数*/
        case 2:Sleep(700);system("cls");Withdraw_money(P1, Phead);break;      /*调用取款函数*/
        case 3:Sleep(700);system("cls");Query(P1);break;                      /*调用查询函数*/
        case 4:Sleep(700);system("cls");Virement(P1, Phead);break;            /*调用转账函数*/
        case 5:Sleep(700);system("cls");Tighten(P1, Phead);break;             /*调用改密函数*/
        case 6:Sleep(700);system("cls");Water(P1);break;                      /*调用流水函数*/
        case 7:Sleep(700);system("cls");Frist(Phead);break;                   /*调用首页函数*/
    }
    Function(P1, Phead);            /*调用功能函数*/
}