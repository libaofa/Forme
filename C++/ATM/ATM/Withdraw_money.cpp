#include "lbf.h"            /*�����Զ���⺯��lbf.h*/

void Withdraw_money(ATM *P1, ATM *Phead)        /*ȡ���*/
{
    double Balance_Wi = 0;                      /*����һ�����α�����Ϊ����ȡ����*/
    cout<<"ȡ�����ֻ��Ϊ100��ֵ"<<endl<<endl;  /*���*/
    cout<<"��Ҫȡ���Ľ��:";                    /*���*/
    cin>>Balance_Wi;

    if(Balance_Wi > 0)                          /*������������0*/
    {
        if((long int)Balance_Wi % 100 == 0)     /*����Ľ�Ϊ100��������*/
        {
            if(Balance_Wi > P1->_Balance())     /*���ȡ����������*/
            {
                Sleep(700);                     /*��ʱ0.7��*/
                system("cls");                  /*����*/
                cerr<<"����"<<endl;         /*���*/
                system("pause");                /*��ͣ*/
                system("cls");                  /*����*/
                Function(P1, Phead);            /*���ù��ܺ���*/
            }
            else                                /*���ȡ����С�ڵ������*/
            {
                Sleep(700);                     /*��ʱ0.7��*/
                SYSTEMTIME time;                /*����һ��ϵͳʱ��Ľṹ��*/
                GetLocalTime(&time);            /*���ñ���ʱ��*/
                std::ofstream pt(P1->file.c_str(), std::ios_base::app);/*����д��ʽ���ļ�*/
                pt<<time.wYear<<"��"<<time.wMonth<<"��"<<time.wDay     /*����������ļ�*/
                <<"��"<<time.wHour<<"ʱ"<<time.wMinute<<"��"<<time.wSecond<<"��-------------";/*����������ļ�*/
                pt<<"ȡ�� "<<Balance_Wi<<" Ԫ*"<<endl;             /*����������ļ�*/
                pt.close();                     /*�ر��ļ�*/
                system("cls");                  /*����*/
                cout<<"ȡ���ɹ�"<<endl;         /*���*/
                system("pause");                /*��ͣ*/
                P1->Balance_reduce(Balance_Wi); /*�������ȡ����ͨ�����ó�Ա�����������*/
			/*--------------------------------------------------------------------------------------*/
				std::ifstream pp( Phead->file.c_str(), std::ios_base::binary);	/*��д��ʽ��txt�ļ�*/
				int sum = 0;				/*�ж��Ƿ�����ѭ��*/
				int count = 0;				/*����λ��*/
				line li;					/*����һ���ṹ�����*/
				line ln;				/*����һ���ṹ�����*/
			
				while(!pp.eof())					/*δ���ļ�β*/
				{
					pp.read((char *)&li, sizeof(line));		/*�ļ���ȡ���ṹ��*/
					if(pp.eof())							/*��ȡ���ļ�β*/
						break;								/*�˳�ѭ��*/
					if(li.timer[0] == (long)time.wYear && li.timer[1] == (long)time.wMonth 
						&& li.timer[2] == (long)time.wDay)	/*����һ��ֵ��ʱ����ͬ��δ���ļ�β*/
						++sum;	/*sum�Լ�1*/		
					else        /*������ͬʱ��*/
						++count;/*count�Լ�*/
					if(sum)		/*���sumΪ1*/
						break;	/*����ѭ��*/
				}
				pp.close();		/*�ر��ļ�*/
				string ff = "G:\\1���\\C++\\vs2012\\ATM\\��ˮ\\��¼f";			/*�ļ���ַ*/
				string bb = "G:\\1���\\C++\\vs2012\\ATM\\��ˮ\\��¼b";			/*�ļ���ַ*/
				std::ifstream pc( Phead->file.c_str(), std::ios_base::binary);	/*��д��ʽ��txt�ļ�*/
				std::ofstream pf( ff, std::ios_base::binary | std::ios_base::trunc);	/*�Զ���ʽ��txt�ļ�*/
				std::ofstream pb( bb, std::ios_base::binary | std::ios_base::trunc);	/*�Զ���ʽ��txt�ļ�*/
				for(int i = 0; i < count; i++)			/*count��ѭ��*/
				{
					pc.read((char *)&ln, sizeof(line));				/*�ı�д��ṹ�����*/
					pf.write((char *)&ln, sizeof(line));			/*�������ݶ����ı�*/
				}
				pf.close();				/*�ر��ļ�*/
				pc.read((char *)&li, sizeof(line));					/*�ı�д��ṹ�����*/
				for(int i = 0; i < Phead->day-count-1; i++)			/* Phead->day-count-1��ѭ��*/
				{
					pc.read((char *)&ln, sizeof(line));				/*�ı�д��ṹ�����*/
					pb.write((char *)&ln, sizeof(line));			/*�������ݶ����ı�*/
				}
				pb.close();		/*�ر��ļ�*/
				pc.close();		/*�ر��ļ�*/
				if(sum)			/*sun��Ϊ0*/
				{
					li.b += (long)Balance_Wi;		/*��������ӵ����˽��*/
					li.c = li.a-li.b;				/*��ȡ��ʣ���*/
					std::ofstream pc( Phead->file.c_str(), std::ios_base::binary | std::ios_base::trunc);	/*�Զ���ʽ��txt�ļ�*/
					std::ifstream pf( ff, std::ios_base::binary);	/*��д��ʽ��txt�ļ�*/
					std::ifstream pb( bb, std::ios_base::binary);	/*��д��ʽ��txt�ļ�*/
					for(int i = 0; i < count; i++)			/*count��ѭ��*/
					{
						pf.read((char *)&ln, sizeof(line));			/*�ı�д��ṹ�����*/
						pc.write((char *)&ln, sizeof(line));		/*�������ݶ����ı�*/
					}
					pc.write((char *)&li, sizeof(line));
					for(int i = 0; i < Phead->day-count-1; i++)			/* Phead->day-count-1��ѭ��*/
					{
						pb.read((char *)&ln, sizeof(line));			/*�ı�д��ṹ�����*/
						pc.write((char *)&ln, sizeof(line));		/*�������ݶ����ı�*/
					}
					pc.close();			/*�ر��ļ�*/
					pb.close();			/*�ر��ļ�*/
					pf.close();			/*�ر��ļ�*/		
				}
			}
		}
		else                /*����Ľ��Ϊ100��������*/
		{
			Sleep(700);     /*��ʱ0.7��*/
			system("cls");  /*����*/
			Withdraw_money(P1, Phead);      /*����ȡ���*/
		}
	}
	else                    /*���������С��0*/
	{
		Sleep(700);         /*��ʱ0.7��*/
		system("cls");      /*����*/
		cerr<<"ȡ�������Ϊ100��ֵ������"<<endl;       /*�������*/
		system("pause");    /*��ͣ*/
		system("cls");      /*����*/
		Function(P1, Phead);/*���ù��ܺ���*/
	}
}
