#include "lbf.h"                /*�����Զ���⺯��lbf.h*/

void Tighten(ATM *P1, ATM *Phead)   /*���ݺ���*/
{
    string Password_T = "      ";   /*������һ��string�����*/
    string Password_R = "      ";   /*������һ��string�����*/
    string Password_R1 = "      ";  /*������һ��string�����*/
    int i = 0;          /*����һ�����α�����Ϊ����*/

    cout<<"���������:";         /*���*/
    for(i = 0; i < 6;)           /*6��ѭ��*/
    {
        Password_T[i] = getch();    /*����һ���ַ�*/
        if((Password_T[i] >= '0' && Password_T[i] <= '9') || Password_T[i] == '\b')  /*���������ַ���0~9֮����߻س���*/
        {
            if(Password_T[i] == '\b')   /*���������ǻس�����i>0*/
            {
                cout<<'\b'<<' '<<'\b';  /*ɾ��һ���ַ�*/
                i--;            /*i�Լ�*/
                continue;       /*������һ��ѭ��*/
            }
            cout<<"*";          /*���*��������*/
            i++;                /*i�Լ�*/
        }
    }
    if(Password_T.compare(P1->_Password()) == 0)     /*�������������е�������ͬ*/
    {
        cout<<endl<<"������������:";      /*���*/
        for(i = 0; i < 6;)          /*6��ѭ��*/
        {
            Password_R[i] = getch();        /*����һ���ַ�*/
            if((Password_R[i] >= '0' && Password_R[i] <= '9' ) || Password_R[i] == '\b')    /*���������ַ���0~9֮����߻س���*/
            {
                if(Password_R1[i] == '\b')  /*���������ǻس�����i>0*/
                {
                    cout<<'\b'<<' '<<'\b';  /*ɾ��һ���ַ�*/
                    i--;        /*i�Լ�*/
                    continue;   /*������һ��ѭ��*/
                }
                cout<<"*";      /*���*��������*/
                i++;            /*i�Լ�*/
            }
        }

        cout<<endl<<"���ٴ�����������:";        /*���*/
        for(i = 0; i < 6;)                      /*6��ѭ��*/
        {
            Password_R1[i] = getch();           /*����һ���ַ�*/
            if((Password_R1[i] >= '0' && Password_R1[i] <= '9') || Password_R1[i] == '\b')  /*���������ַ���0~9֮����߻س���*/
            {
                if(Password_R1[i] == '\b')  /*���������ǻس�����i>0*/
                {
                    cout<<'\b'<<' '<<'\b';  /*ɾ��һ���ַ�*/
                    i--;        /*i�Լ�*/
                    continue;   /*������һ��ѭ��*/
                }
                cout<<"*";      /*���*��������*/
                i++;            /*i�Լ�*/
            }
        }
        cout<<endl;             /*�������*/


        if(Password_R.compare(Password_R1) == 0)     /*�������������е�������ͬ*/
        {
            Sleep(700);                         /*��ʱ0.7��*/
            system("cls");                      /*����*/
            cout<<"�޸ĳɹ�,������һҳ"<<endl;  /*���*/
            P1->Password_change(Password_R);    /*���ó�Ա�����޸�Password*/
            system("pause");            /*��ͣ*/
            system("cls");              /*����*/
            Function(P1, Phead);        /*���ù��ܺ���*/
        }
        else                            /*�������������е����ݲ���ͬ*/
        {
            Sleep(700);                 /*��ʱ0.7��*/
            system("cls");              /*����*/
            cerr<<"�������������벻ͬ,�޸�ʧ��"<<endl;   /*�������*/
            system("pause");            /*��ͣ*/
            system("cls");              /*����*/
            Function(P1, Phead);        /*���ù��ܺ���*/
        }
    }
    else                /*�������������е�������ͬ*/
    {
        Sleep(700);     /*��ʱ0.7��*/
        system("cls");  /*����*/
        cerr<<"�������,������һҳ"<<endl;   /*�������*/
        system("pause");        /*��ͣ*/
        system("cls");          /*����*/
        Function(P1, Phead);    /*���ù��ܺ���*/
    }
}
