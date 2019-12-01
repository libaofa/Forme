#include "lbf.h"            /*调用自定义库函数lbf.h*/

void Frist(ATM *Phead)      /*首页函数*/
{
    int Choice = 0;         /*声明一个整形变量作为选择*/
    int flag = 1;           /*声明一个整形变量作为标志判断是否结束循环*/

    system("cls");                                  /*清屏*/
    cout<<'\t'<<'\t'<<"欢迎使用ATM自助系统"<<endl;  /*输出*/
    cout<<endl<<endl;                               /*输出*/
    cout<<'\t'<<'\t'<<"    1.账户注册"<<endl;       /*输出*/
    cout<<'\t'<<'\t'<<"    2.账户登录"<<endl;       /*输出*/
    cout<<'\t'<<'\t'<<"    3.账户管理"<<endl;       /*输出*/
    cout<<'\t'<<'\t'<<"    4.退出系统"<<endl;       /*输出*/
    cout<<endl<<endl;                               /*输出*/
    cout<<"请输入您的选择:_____"<<'\b'<<'\b'<<'\b'; /*输出*/
	
    while(flag)                         /*死循环*/
    {
        Choice = getch();               /*无缓冲区输入一个字符*/
        if(Choice >= 49 && Choice<= 52) /*如何输出的字符的ASCII码在49到52之间*/
        {
            flag = 0;           /*令flag等于0*/
            Choice -= 48;       /*得到输入的数字*/
            cout<<Choice<<endl; /*输出*/
        }
    }

    switch(Choice)              /*分支选择语句，以Choice作为条件*/
    {
        case 1:Sleep(700);system("cls");Phead = Rigister(Phead);break;                  /*分支1进入注册函数*/
        case 2:Sleep(700);system("cls");Login(Phead);break;                             /*分支2进入登陆函数*/
        case 3:Sleep(700);system("cls");Manage(Phead->Pnext, Phead);break;              /*分支3进入账户管理函数*/
        case 4:Sleep(700);system("cls");Ofstream(Phead->Pnext);Empty_ATM(Phead);break;  /*分支4保存链表，退出*/
    };

    Frist(Phead);               /*调用首页函数*/
}

void Ofstream(ATM *P)           /*保存链表函数*/
{
    std::ofstream file("ATM.txt", std::ios_base::trunc);            /*打开文件ATM.txt,若文件存在则删除文件重新创建*/
    if(!file.is_open())                     /*打开失败*/
    {
        cerr<<"ATM.txt文件打开失败"<<endl;  /*输出*/
        exit(-1);                           /*退出程序*/
    }
    else                                    /*打开成功*/
    {
        while(P != NULL)                    /*如果链表为到链表尾*/
        {
            file<<P->Number<<'\t'<<'\t';            /*将节点的编号存入文件*/
            file<<P->State<<'\t'<<'\t'<<'\t';       /*将节点的状态存入文件*/
            file<<P->_Balance()<<'\t'<<'\t'<<'\t';  /*将节点的余额通过调用成员函数存入文件*/
            file<<P->_Password()<<'\t'<<'\t'<<'\t'; /*将节点的密码通过调用成员函数存入文件*/
            file<<P->_Name()<<'\t'<<'\t'<<'\t';     /*将节点的通过调用成员函数存入文件*/
            file<<P->file<<'\n';                    /*将节点的流水文件位置存入文件*/
            P = P->Pnext;                           /*使节点进位*/
        }
        file.close();               /*关闭文件*/
        cout<<"保存成功"<<endl;     /*输出*/
    }
}
