#ifndef LBF_H_INCLUDED
#define LBF_H_INCLUDED

#include <cmath>                /*���ÿ⺯���е�abs�Ⱥ���*/
#include <conio.h>              /*���ú������е�getch()����,�޻��Ե�����*/
#include <stdlib.h>              /*���ÿ⺯���е�system("cls"),system("pause")����"*/
#include <fstream>              /*�ļ���ȡ*/
#include <iostream>             /*c++�����������*/
#include <string>               /*���ÿ⺯���е�string��,���ַ�������*/
#include <windows.h>            /*���ÿ⺯���е�Sleep(x)����*/
#include <ctime>

namespace io                    /*����һ����Ϊio�������ռ�*/
{
    using std::cin;             /*��cin������ʹ��std��*/
    using std::cout;            /*��cout������ʹ��std��*/
    using std::cerr;            /*��cerr������ʹ��std��*/
    using std::endl;            /*��endl������ʹ��std��*/
    using std::string;          /*��string������ʹ��std��*/
}
using namespace io;             /*ʹ�������ռ�io*/

class atm			/*����*/
{
public:     /*˽�г�Ա*/
    string Name;                /*����һ��string��ı���,��Ϊ��Ա������*/
    string Password;            /*����һ��string��ı���,��Ϊ��Ա������*/
    double Balance;             /*����һ�����εı���,��Ϊ��Ա���˻����*/
    atm(double);                                  /*���캯��*/
    virtual ~atm();                         /*��������*/
};

class ATM : private atm						/*atm�Ĺ��м̳���*/
{
public:     /*������Ա, �ຯ���Ķ�����lbf_Difinition.cpp��*/
    ATM *Pnext;                             /*��Ľڵ�ָ��*/
    static int Count;                       /*����һ����̬������Ϊ����*/
	int	day;								/*����һ�����α�����Ϊ���ڼ���*/
    string file;                            /*����һ��string��ı���,��Ϊ��Ա����ˮ*/
    int Number;                             /*�������α�����Ϊ��ı��*/
    int State;                              /*��Ϊ���״̬,1Ϊ����,0Ϊ����*/
    ATM();                                  /*���캯��*/
    virtual ~ATM();                         /*��������*/
    string _Name();                         /*����˽�г�Ա�е�Name��Ա*/
    string _Password();                     /*����˽�г�Ա�е�Password��Ա*/
    double _Balance();                      /*����˽�г�Ա�е�Balance��Ա*/
    void Name_change(string &);             /*�޸��û���*/
    void Balance_plus(double &);            /*�޸��˻����*/
    void Balance_reduce(double &);          /*�޸��˻����*/
    void Password_change(string &);         /*�޸��˻�����*/
    friend std::ostream &operator <<(std::ostream &, ATM &);              /*��ʾ˽�г�Ա��Ϣ*/
    void show_1();                          /*��ʾ˽�г�Ա��Ϣ��������*/
};

struct line							/*����һ���ṹ��*/
{
	long timer[3];							/*���������鱣������*/
	long a;									/*�����α����������˽��*/
	long b;									/*�����α���������˽��*/
	long c;									/*�����α������澻ʣ���*/
};

ATM *Ifstream(ATM *);                       /*�ļ����ݱ�����������        -main.cpp*/
void Frist(ATM *);                          /*��ҳ                        -Frist.cpp*/
void Ofstream(ATM*);                        /*���������ݱ������ļ�        -Frist.cpp*/
ATM *Rigister(ATM *);                       /*�˻�ע��                    -Rigister.cpp*/
void Login(ATM *);                          /*�˻���¼                    -Login.cpp*/
void Login_one(ATM *, ATM*);                /*�˻���¼                    -Login.cpp*/
void Function(ATM *, ATM*);                 /*�˻�����                    -Function.cpp*/
void Deposit(ATM *, ATM*);                  /*���                        -Deposit.cpp*/
void Withdraw_money(ATM *, ATM*);           /*ȡ��                        -Withdraw_money.cpp*/
void Query(ATM *);                          /*��ѯ                        -Query.cpp*/
void Virement(ATM *, ATM*);                 /*ת��                        -Virement.cpp*/
void Virement_one(ATM *, ATM *, ATM *);     /*ת��                        -Virement.cpp*/
void Tighten(ATM *, ATM*);                  /*����                        -Tighten.cpp*/
void Manage(ATM *, ATM*);                   /*�˻�����                    -Manage.cpp*/
void Empty_ATM(ATM *);                      /*������нڵ�                -Empty_ATM.cpp*/
void Water(ATM *);                          /*��ˮ                        -Water.cpp*/

#endif // LBF_H_INCLUDED
