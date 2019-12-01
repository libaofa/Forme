#include "lbf.h"                    /*调用自定义库函数lbf.h*/

int ATM::Count = 1;                 /*将静态变量Count设置为1*/

atm::atm(double a)                          /*类构造函数*/
{
    Balance = a;                    /*将余额初始化为0*/
}

atm::~atm()                         /*类析构函数*/
{
    cout<<"..."<<endl;              /*结束输出...*/
}

ATM::ATM():atm(0)
{
    State = 1;                      /*将头指针的状态设置为1*/
	day = 0;
}

ATM::~ATM()
{
    cout<<"..."<<endl;              /*结束输出...*/
}

string ATM::_Name()                 /*类成员函数*/
{
    return Name;                    /*返回私有成员Name*/
}

string ATM::_Password()             /*类成员函数*/
{
    return Password;                /*返回私有成员Password*/
}

double ATM::_Balance()              /*类成员函数*/
{
    return Balance;                 /*返回私有成员Balance*/
}

void ATM::Name_change(string &i)    /*类成员函数,将string类的i作为形参*/
{
    Name = i;                       /*将i赋值给私有成员Name*/
    Number = Count;                 /*将静态变量赋值给编号*/
}

void ATM::Balance_plus(double &i)   /*类成员函数,将double类的i作为形参*/
{
    Balance += i;                   /*令私有成员Balance减去i*/
}

void ATM::Balance_reduce(double &i) /*类成员函数,将double类的i作为形参*/
{
    Balance -= i;                   /*令私有成员Balance减去i*/
}

void ATM::Password_change(string &i)/*类成员函数,将string类的i作为形参*/
{
    Password = i;                   /*将i赋值给私有成员Password*/
}

std::ostream &operator <<(std::ostream &output, ATM &P1)
{
    output<<P1.Number<<'\t'<<'\t'           /*输出类的编号*/
    <<P1.State<<'\t'<<'\t'<<'\t'            /*输出类的状态*/
    <<P1._Balance()<<'\t'<<'\t'<<'\t'       /*输出私有成员Balance*/
    <<P1._Password()<<'\t'<<'\t'<<'\t'      /*输出私有成员Password*/
    <<P1._Name()<<endl;                     /*输出私有成员Name*/

    return output;
}

void ATM::show_1()
{
    cout<<Number<<'\t'<<'\t';              /*输出类的编号*/
    cout<<"*******"<<'\t'<<'\t'<<'\t';     /*隐藏输出类的状态*/
    cout<<"******"<<'\t'<<'\t'<<'\t';      /*隐藏输出私有成员Balance*/
    cout<<"******"<<'\t'<<'\t'<<'\t';      /*隐藏输出私有成员Password*/
    cout<<Name<<endl;                      /*输出私有成员Name*/
}
