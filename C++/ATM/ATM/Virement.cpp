#include "lbf.h"                        /*�����Զ���⺯��lbf.h*/

void Virement(ATM *P1, ATM *Phead)      /*����ת�˺���*/
{
    int Number_V = 0;                   /*����һ�����α�����Ϊ�˺�ѡ��*/
    cout<<"��������Ҫת�˵��˺�:";      /*���*/
    cin>>Number_V;                      /*�����˺�*/

    if(Number_V <= P1->Count)           /*�˺Ŵ���*/
    {
        ATM *P2 = Phead;                /*��ͷ���ĵ�ַ������P2*/
        while(P2 != NULL)               /*���P2�ĵ�ַ��Ϊ��*/
        {
            if(P2->Number == Number_V)  /*����ҵ��˺�*/
            {
                break;                  /*�˳�ѭ��*/
            }
            P2 = P2->Pnext;             /*ʹP2��λ*/
        }
        if(P2->Number != P1->Number)    /*�ҵ��˺��Ҳ����ڱ��˺�*/
        {
            Sleep(700);                 /*��ʱ0.7��*/
            system("cls");              /*����*/
            system("pause");            /*��ͣ*/
            Virement_one(P1, P2, Phead);/*����ת��1����*/
        }
        else                            /*�ҵ��˺��ҵ��ڱ��˺�*/
        {
            Sleep(700);                 /*��ʱ0.7��*/
            system("cls");              /*����*/
            cerr<<"��ֹ���Լ�ת��"<<endl;  /*�������*/
            system("pause");            /*��ͣ*/
            system("cls");              /*����*/
            Virement(P1, Phead);        /*����ת�˺���*/
        }

    }
    else                                /*�˺Ų�����*/
    {
        Sleep(700);         /*��ʱ0.7��*/
        system("cls");      /*����*/
        cerr<<"���˻�������,������һҳ"<<endl; /*�������*/
        system("pause");    /*��ͣ*/
        Function(P1, Phead);/*���ù��ܺ���*/
    }
}

void Virement_one(ATM *P1, ATM *P2, ATM *Phead) /*ת��1����*/
{
    double Balance_Vi = 0;                      /*����һ�����α�����Ϊ����ת�˽��*/
    cout<<"ת�˽��ֻ��Ϊ100��ֵ"<<endl<<endl;  /*���*/
    cout<<"��Ҫת�˵Ľ��:";                    /*���*/
    cin>>Balance_Vi;            /*���ת�˽��*/

    if(Balance_Vi > 0)          /*ת�˽�����0*/
    {
        if((long int)Balance_Vi % 100 == 0)     /*����Ľ��Ϊ100��������*/
        {
            if(Balance_Vi > P1->_Balance())     /*���ȡ����������*/
            {
                Sleep(700);         /*��ʱ0.7��*/
                system("cls");      /*����*/
                cerr<<"����,������һҳ"<<endl;       /*�������*/
                system("pause");    /*��ͣ*/
                system("cls");      /*����*/
                Function(P1, P2);   /*���ù��ܺ���*/
            }
            else            /*���ȡ����С�����*/
            {
                Sleep(700);         /*��ʱ0.7��*/
                SYSTEMTIME time;    /*����һ��ϵͳʱ��Ľṹ��*/
                GetLocalTime(&time);/*���ñ���ʱ��*/
                std::ofstream pt(P1->file.c_str(), std::ios_base::app);/*����д��ʽ���ļ�*/
                pt<<time.wYear<<"��"<<time.wMonth<<"��"<<time.wDay    /*����������ļ�*/
                <<"��"<<time.wHour<<"ʱ"<<time.wMinute<<"��"<<time.wSecond<<"��-------------";/*����������ļ�*/
                pt<<"ת�˸� ["<<P2->_Name()<<"] "<<Balance_Vi<<" Ԫ*"<<endl;/*����������ļ�*/
                pt.close();         /*�ر��ļ�*/
                std::ofstream pp(P2->file.c_str(), std::ios_base::app);/*����д��ʽ���ļ�*/
                pp<<time.wYear<<"��"<<time.wMonth<<"��"<<time.wDay    /*����������ļ�*/
                <<"��"<<time.wHour<<"ʱ"<<time.wMinute<<"��"<<time.wSecond<<"��-------------";/*����������ļ�*/
                pp<<"["<<P1->_Name()<<"] ת�˽�"<<Balance_Vi<<" Ԫ*"<<endl;/*����������ļ�*/
                pp.close();         /*�ر��ļ�*/
                system("cls");      /*����*/
                cout<<"ת�˳ɹ�"<<endl;     /*���*/
                P1->Balance_reduce(Balance_Vi);     /*�������ȡ����ͨ�����ó�Ա�����������*/
                P2->Balance_plus(Balance_Vi);       /*�������ȡ����ͨ�����ó�Ա�����ӵ����*/
                system("pause");            /*��ͣ*/
            }
        }
        else            /*����Ľ�Ϊ100��������*/
        {
            Sleep(700);         /*��ʱ0.7��*/
            system("cls");      /*����*/
            Virement_one(P1, P2, Phead);        /*����ת��1����*/
        }

    }
    else        /*ת�˽��С��0*/
    {
        Sleep(700);             /*��ʱ0.7��*/
        system("cls");          /*����*/
        cerr<<"ת�˽����Ϊ100��ֵ������"<<endl;   /*�������*/
        system("pause");        /*��ͣ*/
        system("cls");          /*����*/
        Function(P1, Phead);    /*���ù��ܺ���*/
    }
}
