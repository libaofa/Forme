#include "lbf.h"            /*���ڵ�����ͨ�����ó�Ա���������ļ�*/

void Login(ATM *Phead)      /*��½����*/
{
    ATM *P1 = Phead->Pnext; /*��ͷ������һ���ڵ�ĵ�ַ������P1*/
    int Choice = 0;         /*����һ�����α�����Ϊ���*/
    if(P1 != NULL)          /*����������*/
    {
        cout<<"�����������˺�:";            /*���*/
        cin>>Choice;                        /*����*/
        if(Choice > 0)                      /*����ı�Ŵ���0*/
        {
            while(P1->Pnext != NULL)        /*δѭ�������һ���ڵ�*/
            {
                if(P1->Number == Choice)    /*�ڵ�ı�ŵ�������ı��*/
                {
                    break;                  /*����ѭ��*/
                }
                P1 = P1->Pnext;             /*ʹ�ڵ��λ*/
            }
            if(Choice <= P1->Count)         /*����ı�Ŵ���*/
            {
                Login_one(P1, Phead);       /*�����½1����*/
            }
            else                    /*����ı�Ų�����*/
            {
                Sleep(700);         /*��ʱ0.7��*/
                system("cls");      /*����*/
                cerr<<"���˻�������,������ҳ��"<<endl;     /*�������*/
                system("pause");    /*��ͣ*/
                Frist(Phead);       /*������ҳ����*/
            }
        }
        else                        /*����ı��С��0*/
        {
            Sleep(700);             /*��ʱ0.7��*/
            system("cls");          /*����*/
            cerr<<"�˺�Ϊ����0������,����������"<<endl;     /*�������*/
            system("pause");        /*��ͣ*/
            Login(Phead);           /*���õ�½����*/
        }
    }
    else                            /*�����������*/
    {
        Sleep(700);                 /*��ʱ0.7��*/
        system("cls");              /*����*/
        cerr<<"δע���˻�,������ҳ��"<<endl;      /*�������*/
        system("pause");            /*��ͣ*/
        Frist(Phead);               /*������ҳ����*/
    }
}

void Login_one(ATM *P1, ATM *Phead)
{
    string string_R = "      ";   /*����һ��string�������Ϊ��������*/
    int i = 0;                      /*����һ�����α�����Ϊ����*/
    static int Choice_cc = 0;       /*����һ����̬������ȡ�ַ�*/
    static int Count = 2;           /*����һ����̬��������������ѭ����*/
    if(P1->State == 1)              /*�ڵ��״̬����State = 1*/
    {
        if(Choice_cc)               /*Choice_cc��Ϊ0*/
            Choice_cc = getch();    /*��ȡһ���ַ�*/
        cout<<"��ESC�˳�,���ఴ������\n";    /*���*/
        if((Choice_cc = getch()) == 27)      /*����һ���ַ�,����ַ���ASCII��Ϊ27*/
        {
            system("pause");                 /*��ͣ*/
            Count = 2;                       /*���¼�������*/
            Frist(Phead);                    /*������ҳ����*/
        }
        cout<<"��������������:";             /*���*/
        for(i = 0; i < 6;)                   /*6��ѭ��*/
        {
            string_R[i] = getch();         /*����һ���ַ���string_R[i]*/
            if((string_R[i] >= '0' && string_R[i] <= '9') || string_R[i] == '\b')/*���������ַ���0~9֮����߻س���*/
            {
                if(string_R[i] == '\b' && i > 0)  /*���������ǻس�����i>0*/
                {
                    cout<<'\b'<<' '<<'\b';          /*ɾ��һ���ַ�*/
                    i--;                            /*i�Լ�*/
                    continue;                       /*������һ��ѭ��*/
                }
                cout<<"*";      /*���*��������*/
                i++;            /*i�Լ�*/
            }
        }
        cout<<endl;             /*���*/
        Sleep(700);             /*��ʱ0.7��*/

        if(string_R.compare(P1->_Password()) == 0)        /*������������е�������ͬ*/
        {
            cout<<endl<<"�˺�������ȷ,���빦�ܽ���"<<endl;  /*���*/
            Count = 2;          /*���¼���*/
            system("pause");    /*��ͣ*/
            Function(P1, Phead);/*���ù��ܺ���*/
        }
        else                    /*���������е����в���ͬ*/
        {
            if(Count > 0)       /*���������������Ļ���*/
            {
                Sleep(700);     /*��ʱ0.7��*/
                system("cls");  /*��ͣ*/
                cerr<<"�����������������,������"<<Count--<<"�λ���"<<endl<<endl;  /*���*/
                Login_one(P1, Phead);       /*���ù��ܺ���*/
            }
            else                /*û���������*/
            {
                Sleep(700);     /*��ʱ0.7��*/
                system("cls");  /*����*/
                cerr<<"�����˻�������,����ϵ����Ա����"<<endl; /*����*/
                Count = 2;      /*���¼�������*/
                P1->State = 0;  /*ʹ�˺ŵ�״̬Ϊ0��State = 0*/
                system("pause");/*��ͣ*/
            }
        }
    }
    else                    /*�ڵ��״̬����State = 0*/
    {
        Sleep(700);         /*��ʱ0.7��*/
        system("cls");      /*����*/
        cerr<<"���˻�������,������һҳ"<<endl; /*���*/
        system("pause");    /*��ͣ*/
        system("cls");      /*����*/
        Frist(Phead);       /*������ҳ����*/
    }
}
