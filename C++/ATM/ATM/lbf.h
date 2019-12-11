#ifndef LBF_H_INCLUDED
#define LBF_H_INCLUDED

#include <cmath>                /*调用库函数中的abs等函数*/
#include <conio.h>              /*调用函数库中的getch()函数,无回显的输入*/
#include <stdlib.h>              /*调用库函数中的system("cls"),system("pause")函数"*/
#include <fstream>              /*文件读取*/
#include <iostream>             /*c++的输入输出流*/
#include <string>               /*调用库函数中的string类,和字符串操作*/
#include <windows.h>            /*调用库函数中的Sleep(x)函数*/
#include <ctime>

namespace io                    /*创建一个名为io的命名空间*/
{
    using std::cin;             /*对cin流进行使用std流*/
    using std::cout;            /*对cout流进行使用std流*/
    using std::cerr;            /*对cerr流进行使用std流*/
    using std::endl;            /*对endl流进行使用std流*/
    using std::string;          /*对string流进行使用std流*/
}
using namespace io;             /*使用命名空间io*/

class atm			/*基类*/
{
public:     /*私有成员*/
    string Name;                /*声明一个string类的变量,作为成员的姓名*/
    string Password;            /*声明一个string类的变量,作为成员的密码*/
    double Balance;             /*声明一个整形的变量,作为成员的账户余额*/
    atm(double);                                  /*构造函数*/
    virtual ~atm();                         /*析构函数*/
};

class ATM : private atm						/*atm的公有继承类*/
{
public:     /*公共成员, 类函数的定义在lbf_Difinition.cpp中*/
    ATM *Pnext;                             /*类的节点指针*/
    static int Count;                       /*声明一个静态变量作为计数*/
	int	day;								/*声明一个整形变量作为日期计数*/
    string file;                            /*声明一个string类的变量,作为成员的流水*/
    int Number;                             /*声明整形变量作为类的编号*/
    int State;                              /*作为类的状态,1为正常,0为锁定*/
    ATM();                                  /*构造函数*/
    virtual ~ATM();                         /*析构函数*/
    string _Name();                         /*调用私有成员中的Name成员*/
    string _Password();                     /*调用私有成员中的Password成员*/
    double _Balance();                      /*调用私有成员中的Balance成员*/
    void Name_change(string &);             /*修改用户名*/
    void Balance_plus(double &);            /*修改账户余额*/
    void Balance_reduce(double &);          /*修改账户余额*/
    void Password_change(string &);         /*修改账户密码*/
    friend std::ostream &operator <<(std::ostream &, ATM &);              /*显示私有成员信息*/
    void show_1();                          /*显示私有成员信息带有隐藏*/
};

struct line							/*声明一个结构体*/
{
	long timer[3];							/*长整型数组保存日期*/
	long a;									/*长整形变量保存入账金额*/
	long b;									/*长整形变量保存出账金额*/
	long c;									/*长整形变量保存净剩金额*/
};

ATM *Ifstream(ATM *);                       /*文件内容保存至类链表        -main.cpp*/
void Frist(ATM *);                          /*首页                        -Frist.cpp*/
void Ofstream(ATM*);                        /*类链表内容保存至文件        -Frist.cpp*/
ATM *Rigister(ATM *);                       /*账户注册                    -Rigister.cpp*/
void Login(ATM *);                          /*账户登录                    -Login.cpp*/
void Login_one(ATM *, ATM*);                /*账户登录                    -Login.cpp*/
void Function(ATM *, ATM*);                 /*账户功能                    -Function.cpp*/
void Deposit(ATM *, ATM*);                  /*存款                        -Deposit.cpp*/
void Withdraw_money(ATM *, ATM*);           /*取款                        -Withdraw_money.cpp*/
void Query(ATM *);                          /*查询                        -Query.cpp*/
void Virement(ATM *, ATM*);                 /*转账                        -Virement.cpp*/
void Virement_one(ATM *, ATM *, ATM *);     /*转账                        -Virement.cpp*/
void Tighten(ATM *, ATM*);                  /*改密                        -Tighten.cpp*/
void Manage(ATM *, ATM*);                   /*账户管理                    -Manage.cpp*/
void Empty_ATM(ATM *);                      /*清空所有节点                -Empty_ATM.cpp*/
void Water(ATM *);                          /*流水                        -Water.cpp*/

#endif // LBF_H_INCLUDED
