#include "lbf.h"            /*�����Զ���⺯��lbf.h*/

void Frist(ATM *Phead)      /*��ҳ����*/
{
    int Choice = 0;         /*����һ�����α�����Ϊѡ��*/
    int flag = 1;           /*����һ�����α�����Ϊ��־�ж��Ƿ����ѭ��*/

    system("cls");                                  /*����*/
    cout<<'\t'<<'\t'<<"��ӭʹ��ATM����ϵͳ"<<endl;  /*���*/
    cout<<endl<<endl;                               /*���*/
    cout<<'\t'<<'\t'<<"    1.�˻�ע��"<<endl;       /*���*/
    cout<<'\t'<<'\t'<<"    2.�˻���¼"<<endl;       /*���*/
    cout<<'\t'<<'\t'<<"    3.�˻�����"<<endl;       /*���*/
    cout<<'\t'<<'\t'<<"    4.�˳�ϵͳ"<<endl;       /*���*/
    cout<<endl<<endl;                               /*���*/
    cout<<"����������ѡ��:_____"<<'\b'<<'\b'<<'\b'; /*���*/
	
    while(flag)                         /*��ѭ��*/
    {
        Choice = getch();               /*�޻���������һ���ַ�*/
        if(Choice >= 49 && Choice<= 52) /*���������ַ���ASCII����49��52֮��*/
        {
            flag = 0;           /*��flag����0*/
            Choice -= 48;       /*�õ����������*/
            cout<<Choice<<endl; /*���*/
        }
    }

    switch(Choice)              /*��֧ѡ����䣬��Choice��Ϊ����*/
    {
        case 1:Sleep(700);system("cls");Phead = Rigister(Phead);break;                  /*��֧1����ע�ắ��*/
        case 2:Sleep(700);system("cls");Login(Phead);break;                             /*��֧2�����½����*/
        case 3:Sleep(700);system("cls");Manage(Phead->Pnext, Phead);break;              /*��֧3�����˻�������*/
        case 4:Sleep(700);system("cls");Ofstream(Phead->Pnext);Empty_ATM(Phead);break;  /*��֧4���������˳�*/
    };

    Frist(Phead);               /*������ҳ����*/
}

void Ofstream(ATM *P)           /*����������*/
{
    std::ofstream file("ATM.txt", std::ios_base::trunc);            /*���ļ�ATM.txt,���ļ�������ɾ���ļ����´���*/
    if(!file.is_open())                     /*��ʧ��*/
    {
        cerr<<"ATM.txt�ļ���ʧ��"<<endl;  /*���*/
        exit(-1);                           /*�˳�����*/
    }
    else                                    /*�򿪳ɹ�*/
    {
        while(P != NULL)                    /*�������Ϊ������β*/
        {
            file<<P->Number<<'\t'<<'\t';            /*���ڵ�ı�Ŵ����ļ�*/
            file<<P->State<<'\t'<<'\t'<<'\t';       /*���ڵ��״̬�����ļ�*/
            file<<P->_Balance()<<'\t'<<'\t'<<'\t';  /*���ڵ�����ͨ�����ó�Ա���������ļ�*/
            file<<P->_Password()<<'\t'<<'\t'<<'\t'; /*���ڵ������ͨ�����ó�Ա���������ļ�*/
            file<<P->_Name()<<'\t'<<'\t'<<'\t';     /*���ڵ��ͨ�����ó�Ա���������ļ�*/
            file<<P->file<<'\n';                    /*���ڵ����ˮ�ļ�λ�ô����ļ�*/
            P = P->Pnext;                           /*ʹ�ڵ��λ*/
        }
        file.close();               /*�ر��ļ�*/
        cout<<"����ɹ�"<<endl;     /*���*/
    }
}
