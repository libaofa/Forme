#include "lbf.h"                    /*�����Զ���⺯��lbf.h*/

int ATM::Count = 1;                 /*����̬����Count����Ϊ1*/

atm::atm(double a)                          /*�๹�캯��*/
{
    Balance = a;                    /*������ʼ��Ϊ0*/
}

atm::~atm()                         /*����������*/
{
    cout<<"..."<<endl;              /*�������...*/
}

ATM::ATM():atm(0)
{
    State = 1;                      /*��ͷָ���״̬����Ϊ1*/
	day = 0;
}

ATM::~ATM()
{
    cout<<"..."<<endl;              /*�������...*/
}

string ATM::_Name()                 /*���Ա����*/
{
    return Name;                    /*����˽�г�ԱName*/
}

string ATM::_Password()             /*���Ա����*/
{
    return Password;                /*����˽�г�ԱPassword*/
}

double ATM::_Balance()              /*���Ա����*/
{
    return Balance;                 /*����˽�г�ԱBalance*/
}

void ATM::Name_change(string &i)    /*���Ա����,��string���i��Ϊ�β�*/
{
    Name = i;                       /*��i��ֵ��˽�г�ԱName*/
    Number = Count;                 /*����̬������ֵ�����*/
}

void ATM::Balance_plus(double &i)   /*���Ա����,��double���i��Ϊ�β�*/
{
    Balance += i;                   /*��˽�г�ԱBalance��ȥi*/
}

void ATM::Balance_reduce(double &i) /*���Ա����,��double���i��Ϊ�β�*/
{
    Balance -= i;                   /*��˽�г�ԱBalance��ȥi*/
}

void ATM::Password_change(string &i)/*���Ա����,��string���i��Ϊ�β�*/
{
    Password = i;                   /*��i��ֵ��˽�г�ԱPassword*/
}

std::ostream &operator <<(std::ostream &output, ATM &P1)
{
    output<<P1.Number<<'\t'<<'\t'           /*�����ı��*/
    <<P1.State<<'\t'<<'\t'<<'\t'            /*������״̬*/
    <<P1._Balance()<<'\t'<<'\t'<<'\t'       /*���˽�г�ԱBalance*/
    <<P1._Password()<<'\t'<<'\t'<<'\t'      /*���˽�г�ԱPassword*/
    <<P1._Name()<<endl;                     /*���˽�г�ԱName*/

    return output;
}

void ATM::show_1()
{
    cout<<Number<<'\t'<<'\t';              /*�����ı��*/
    cout<<"*******"<<'\t'<<'\t'<<'\t';     /*����������״̬*/
    cout<<"******"<<'\t'<<'\t'<<'\t';      /*�������˽�г�ԱBalance*/
    cout<<"******"<<'\t'<<'\t'<<'\t';      /*�������˽�г�ԱPassword*/
    cout<<Name<<endl;                      /*���˽�г�ԱName*/
}
