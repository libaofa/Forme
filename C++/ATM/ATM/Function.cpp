#include "lbf.h"                /*�����Զ���⺯��lbf.h*/

void Function(ATM *P1, ATM *Phead)          /*���ܺ���*/
{
    int Choice = 0;             /*�������α�����Ϊѡ��*/
    int flag = 1;               /*�������α�����Ϊ�˳�ѭ���ı�־*/
    system("cls");
    cout<<'\t'<<'\t'<<"1.���"<<endl;     /*���*/
    cout<<'\t'<<'\t'<<"2.ȡ��"<<endl;     /*���*/
    cout<<'\t'<<'\t'<<"3.��ѯ"<<endl;     /*���*/
    cout<<'\t'<<'\t'<<"4.ת��"<<endl;     /*���*/
    cout<<'\t'<<'\t'<<"5.����"<<endl;     /*���*/
    cout<<'\t'<<'\t'<<"6.��ˮ"<<endl;     /*���*/
    cout<<'\t'<<'\t'<<"7.ע��"<<endl;     /*���*/
    cout<<endl<<"����������ѡ��:_____"<<'\b'<<'\b'<<'\b';     /*���*/

    while(flag)                         /*��ѭ��*/
    {
        Choice = getch();               /*����һ���ַ�*/
        if(Choice >= 49 && Choice <= 55)/*���������ַ���ascii����49~55����*/
        {
            flag = 0;                   /*��0��ֵ��flag��flag = 0��ѭ������������*/
            Choice -= 48;               /*��ȡ���������*/
            cout<<Choice<<endl;         /*���*/
        }
    }

    switch(Choice)                  /*��֧ѡ����䣬��Choice��Ϊ����*/
    {
        case 1:Sleep(700);system("cls");Deposit(P1, Phead);break;             /*���ô���*/
        case 2:Sleep(700);system("cls");Withdraw_money(P1, Phead);break;      /*����ȡ���*/
        case 3:Sleep(700);system("cls");Query(P1);break;                      /*���ò�ѯ����*/
        case 4:Sleep(700);system("cls");Virement(P1, Phead);break;            /*����ת�˺���*/
        case 5:Sleep(700);system("cls");Tighten(P1, Phead);break;             /*���ø��ܺ���*/
        case 6:Sleep(700);system("cls");Water(P1);break;                      /*������ˮ����*/
        case 7:Sleep(700);system("cls");Frist(Phead);break;                   /*������ҳ����*/
    }
    Function(P1, Phead);            /*���ù��ܺ���*/
}