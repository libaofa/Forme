#include "lbf.h"        /*�����Զ���⺯��lbf.h*/

int main()              /*������,���������*/
{
    ATM *Phead = new ATM;           /*����ͷָ��,��Ϊ�俪�ٿռ�*/
    Phead->Pnext = NULL;            /*��ͷָ��Ľڵ��ַ����Ϊ0*/
    string one = "����Ա";          /*string��*/
    string two = "000000";          /*string��*/
    Phead->Name_change(one);        /*�� ����Ա ��Ϊʵ�δ��ݸ�ͷָ���Name_change����*/
    Phead->Password_change(two);    /*��000000��Ϊʵ�δ��ݸ�ͷָ���Password_change����*/
    Phead = Ifstream(Phead);        /*�����ļ����뺯��*/
    Phead->Number = 0;              /*��ͷ����λ������Ϊ0*/
    Phead->file = "G:\\1���\\C++\\vs2012\\ATM\\��ˮ\\��¼"; /*����һ��string�������Ϊ�ļ���λ��*/
    line li;
    SYSTEMTIME time;        /*����һ��ϵͳʱ��Ľṹ��*/
    GetLocalTime(&time);    /*���ñ���ʱ��*/		
    int sum = 0;			/*�ж�����ѭ��*/
    std::ifstream pp( Phead->file.c_str(), std::ios_base::binary);	/*��д��ʽ��txt�ļ�*/
	if(!pp.is_open())						/*��ʧ��*/
	{
		std::ofstream
		ps( Phead->file.c_str(), std::ios_base::trunc | std::ios_base::binary);	/*���ļ����������ļ���СΪ0k*/
		ps.close();							/*�ر��ļ�*/
	}
	else									/*�򿪳ɹ�*/
	{
		while(!pp.eof())					/*δ���ļ�β*/
		{
			pp.read((char *)&li, sizeof(line));		/*���ļ�����ṹ��*/
			if(pp.eof())							/*��ȡ���ļ�β*/
				break;								/*�˳�ѭ��*/
			if(li.timer[0] == (long)time.wYear && li.timer[1] == (long)time.wMonth &&li.timer[2] == (long)time.wDay && !pp.eof())/*����һ��ֵ��ʱ����ͬδ���ļ�β*/
				++sum;								/*sum�Լ�1*/
			++Phead->day;				/*�������*/
		}
		pp.close();							/*�ر��ļ�*/
	}
	if(sum == 0)						/*sum = 0*/
	{
		std::ofstream pt(Phead->file.c_str(), std::ios_base::app | std::ios_base::binary);		/*��д��ĩβ�ķ�ʽ���ļ�*/
		li.timer[0] = (long)time.wYear;		/*���ṹ���������Ϊ���*/
		li.timer[1] = (long)time.wMonth;	/*���ṹ���������Ϊ�·�*/
		li.timer[2] = (long)time.wDay;		/*���ṹ���������Ϊ��*/
		li.a = 0;							/*������*/
		li.b = 0;							/*ȡ�����*/
		li.c = li.a-li.b;					/*��ֵ*/
		pt.write((char *)&li, sizeof(line));/*���ṹ������ļ�*/
			
		pt.close();							/*�ر��ļ�*/	
	}

    Frist(Phead);                   /*������ҳ�Ӻ���*/

    //return 0;                       /*������������ֵ0*/
}

ATM *Ifstream(ATM *Phead)           /*�����ļ����뺯��*/
{
    ATM *PXX = Phead;               /*��ͷ��㿽����PXX*/
    string Name_in;                 /*����һ��string��ı���,��Ϊ��Ա������*/
    string Password_in;             /*����һ��string��ı���,��Ϊ��Ա������*/
    double Balance_in = 0;          /*����һ�����εı���,��Ϊ��Ա���˻����*/

    std::ifstream file("ATM.txt");  /*��д�뷽ʽ����ΪATM.txt���ļ�*/
    if(!file.is_open())             /*�����ʧ��*/
    {
        cerr<<"ATM.txt�ļ���ʧ��,�ļ����Զ�����"<<endl;    /*���*/
        std::ifstream file("ATM.txt"); /*��д����ɾ����������ʽ��ATM.txt�ļ�*/
        Phead->Count = 0;           /*����̬����Count��Ϊ0*/
        system("pause");            /*��ͣ*/
    }
    else                            /*����򿪳ɹ�*/
    {
        while(!file.eof())          /*���û�ж�ȡ���ļ�ĩβ*/
        {
            ATM *P1 = new ATM;                  /*����һ�����󲢿���һ����СΪsizeof(ATM)�ռ�*/
            file>>P1->Number;                   /*���ļ��е����ݴ���P1��Number��*/
            file>>P1->State;                    /*���ļ��е����ݴ���P1��State��*/
            file>>Balance_in;                   /*���ļ��е����ݴ���P1��Balance_in��*/
            P1->Balance_plus(Balance_in);       /*ͨ���������й�����Ա������Balance_in�е����ݴ������е�Balance*/
            file>>Password_in;                  /*���ļ��е����ݴ���P1��Password_in��*/
            P1->Password_change(Password_in);   /*ͨ���������й�����Ա������Password_in�е����ݴ������е�Password*/
            file>>Name_in;                      /*���ļ��е����ݴ���P1��Name_in��*/
            P1->Name_change(Name_in);           /*ͨ���������й�����Ա������Name_in�е����ݴ������е�Name*/
            file>>P1->file;                     /*���ļ��е����ݴ���P1��fail��*/
            ++P1->Count;                        /*��̬����Count�Լ�,��Ա��һ*/
            P1->Pnext = NULL;                   /*��P1��βָ����ΪNULL*/
            if(file.peek() == EOF)              /*��������ļ�β��ֹ���һ����Ա��������*/
            {
                --P1->Count;                    /*��̬����Count�Լ�,��Ա��һ*/
                delete P1;                      /*�ͷ�P1�Ŀռ�*/
                break;                          /*����ѭ��*/
            }
            PXX->Pnext = P1;                    /*��P1����PXX�ĺ���*/
            PXX = P1;                           /*��P1�ĵ�ַ������PXX*/
        }
        --PXX->Count;                           /*��̬����Count�Լ�,��Ա��һ*/
        file.close();                           /*�ر��ļ�*/
    }

    return Phead;                               /*����ͷ�������ú���*/
}
