#include "lbf.h"                    /*�����Զ���⺯��lbf.h*/

void Deposit(ATM *P1, ATM *Phead)   /*����*/
{
    double Balance_D = 0;           /*����һ�����α�����Ϊ���������*/
    cout<<"������ֻ��Ϊ100��ֵ"<<endl<<endl;       /*���*/
    cout<<"��Ҫ����Ľ��:";        /*���*/
    cin>>Balance_D;                 /*���������*/

    if(Balance_D > 0)               /*������������0*/
    {
        if((long int)Balance_D % 100 != 0)      /*����Ľ�Ϊ100��������*/
        {
            Sleep(700);             /*��ʱ0.7��*/
            system("cls");          /*����*/
            Deposit(P1, Phead);     /*���ô���*/
        }
        else                        /*����Ľ��Ϊ100��������*/
        {
            Sleep(700);             /*��ʱ0.7��*/
            system("cls");          /*����*/
            SYSTEMTIME time;        /*����һ��ϵͳʱ��Ľṹ��*/
            system("cls");;    /*���ñ���ʱ��*/
            std::ofstream pt(P1->file.c_str(), std::ios_base::app);         /*����д��ʽ���ļ�*/
            pt<<time.wYear<<"��"<<time.wMonth<<"��"<<time.wDay              /*��ʱ������ļ�*/
            <<"��"<<time.wHour<<"ʱ"<<time.wMinute<<"��"<<time.wSecond<<"��-------------";  /*��ʱ������ļ�*/
            pt<<"���� "<<Balance_D<<" Ԫ*"<<endl;      /*�����ݴ����ļ�*/
            pt.close();             /*�ر��ļ�*/
            cout<<"����ɹ�"<<endl; /*���*/
            system("pause");        /*��ͣ*/
            P1->Balance_plus(Balance_D);    /*������ô�����ͨ�����ó�Ա�����ӵ����*/
			/*------------------------------------------------------------------------------------------------------------------*/
			std::ifstream pp( Phead->file.c_str(), std::ios_base::in | std::ios_base::binary);	/*��д��ʽ��txt�ļ�*/
			int sum = 0;			/*�ж��Ƿ�����ѭ��*/
			int count = 0;			/*����λ��*/
			line li;				/*����һ���ṹ�����*/
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
				li.a += (long)Balance_D;		/*��������ӵ����˽��*/
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
    else                            /*���������С��0*/
    {
        Sleep(700);                 /*��ʱ0.7��*/
        system("cls");              /*����*/
        cerr<<"��������Ϊ100��ֵ������"<<endl;   /*���*/
        system("pause");            /*��ͣ*/
        system("cls");              /*����*/
        Function(P1, Phead);        /*���ù��ܺ���*/
    }
}
