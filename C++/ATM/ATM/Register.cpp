#include "lbf.h"                /*�����Զ���⺯��lbf.h*/

ATM *Rigister(ATM *Phead)       /*�����Աע�ắ��*/
{
    string Name_R;                                  /*����һ��string�������Ϊ���������*/
    string string_R = "      ";                   /*����һ��string�������Ϊ����ĵ�һ������*/
    string string_R1 = "      ";                  /*����һ��string�������Ϊ����ĵڶ�������*/
    string Frond_f = "G:\\1���\\C++\\vs2012\\ATM\\��ˮ\\"; /*����һ��string�������Ϊ�ļ���λ��*/
    string Back_f = ".txt";                         /*����һ��string�������Ϊ�ļ�������*/
    int i = 0;                                      /*����һ�����α�����Ϊ����ļ�����*/
    cout<<"�������������λ6��,�������������ͬ,������������"<<endl;   /*���*/
    cout<<"�������ʼ��Ϊ0"<<endl<<endl;                             /*���*/
    cout<<"�������û���:";                                             /*���*/
    cin>>Name_R;                        /*��������*/
    int Choice_cc = 0;                  /*����һ�����α�����ȡ����*/
    cout<<"\n��ESC�˳�,���ఴ������\n"; /*���*/
    if((Choice_cc = getch()) == 27)     /*����һ���ַ�,����ַ���ASCII��Ϊ27*/
    {
        system("pause");    /*��ͣ*/
        Frist(Phead);       /*��ת����ҳ����*/
    }

    cout<<endl<<"����������:";          /*���*/
    for(i = 0; i < 6;)                  /*����ѭ��*/
    {
        string_R[i] = getch();        /*�����ַ����ַ���string_R[i]*/
        if((string_R[i] >= '0' && string_R[i] <= '9') || string_R[i] == '\b') /*���������ַ���0~9֮����߻س���*/
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
    cout<<"\n��ESC�˳�,���ఴ������\n";         /*���*/
    if((Choice_cc = getch()) == 27)             /*����һ���ַ�,����ַ���ASCII��Ϊ27*/
    {
        system("pause");    /*��ͣ*/
        Frist(Phead);       /*��ת����ҳ����*/
    }

    cout<<endl<<"���ٴ���������:";             /*���*/
    for(i = 0; i < 6; )                        /*6��ѭ��*/
    {
        string_R1[i] = getch();              /*�����ַ����ַ���string_R_1[i]*/
        if((string_R1[i] >= '0' && string_R1[i] <= '9') || string_R1[i] == '\b')  /*���������ַ���0~9֮����߻س���*/
        {
            if(string_R1[i] == '\b' && i > 0) /*���������ǻس�����i>0*/
            {
                cout<<'\b'<<' '<<'\b';          /*ɾ��һ���ַ�*/
                i--;        /*i�Լ�*/
                continue;   /*������һ��ѭ��*/
            }
            cout<<"*";      /*���*��������*/
            i++;            /*i�Լ�*/
        }
    }
    cout<<endl;             /*���*/

    if(string_R.compare(string_R1) == 0)    /*�������������е�������ͬ*/
    {
        ATM *P1 = Phead;    /*��ͷ���ĵ�ַ������P1*/
        ATM *P2 = new ATM;  /*����һ�����󣬲������ռ�*/

        while(P1->Pnext != NULL)                /*���P1��β�ڵ�ĵ�ַ��Ϊ��*/
            P1 = P1->Pnext;                     /*��P1��β�ڵ�ĵ�ַ������P1*/

        P1->Pnext = P2;                         /*��P2������P1�ĺ���*/
        ++P2->Count;                            /*��̬�����Լ�,��Ա��һ*/
        P2->Name_change(Name_R);                /*ͨ�����ù��г�Ա����,��Name_R������Name*/
        P2->Password_change(string_R);        /*ͨ�����ù��г�Ա����,��string_R������string*/
        P2->Pnext = NULL;                       /*��P2��Ϊ�ڵ�ĵ�ַΪ��*/
        string File = "                    ";   /*����һ��string������Ϊ�ļ���*/
		srand((unsigned)time(NULL));                      /*����ǰʱ����Ϊ�����������*/
        for(int i = 0; i < 20; i++)             /*20��ѭ��*/
            File[i] = char(rand()%10+48);       /*��0~9�����������ֵ��File[i]*/
        P2->file = Frond_f + File + Back_f;     /*���ļ�λ��,�ļ���,�ļ��������ݼ���һ��ֵ��file*/
        std::ofstream pt(P2->file.c_str());     /*�Զ�ȡ��ʽ���ļ���Ϊfile�е����е��ļ�*/
        pt<<"�û���:"<<P2->_Name()<<'*'<<endl;  /*�û�����ȡ���ļ�*/
        pt.close();                             /*�ر��ļ�*/
        system("cls");                          /*����*/
        cout<<"ע��ɹ�"<<endl;                 /*���*/
        cout<<"�����˺�Ϊ"<<P2->Number<<endl;   /*���*/
        cout<<"�����û���Ϊ"<<Name_R<<endl<<endl;     /*���*/
        system("pause");/*��ͣ*/

        return Phead;   /*����ͷ�������ú���*/
    }
    else        /*����������벻��ͬ*/
    {
        cerr<<"�������벻һ��,����������."; /*���*/
        system("pause");    /*��ͣ*/
        system("cls");      /*����*/
        Rigister(Phead);    /*����ע�ắ��*/

        return 0;           /*����ֵΪ0*/
    }
}
