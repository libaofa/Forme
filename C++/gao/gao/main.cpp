#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

class Atm
{
private:
	string name;	//����
	string mima;	//����
	int zhanghao;	//�˺�
	double yue;		//���,��ʼΪ0
	bool suoding;	//�����˺�,0δ������1����
	int cishu;		//ʣ�������������ʼΪ3
	static double z_yue;	//Atm������ʼΪ0
	static int count;		//�˺Ÿ���
	
public:
	Atm();			//���캯��������ע��
	~Atm();			//�����������ͷſռ�
	void show(int i);	//��ʾ��Ա��Ϣ
	static double return_zyue();	//�����������Ϣ
	void set_suoding_jie();		//��������
	void set_suoding_suo();		//��������
	void xiugai();				//�޸ĺ���
	int return_zhanghao();		//�����˺�
	int return_cishu();			//���ؿɵ�½����
	void set_jine(double jine);	//���ý��
	void set_cishu();			//���ÿɵ�½����
	bool return_suoding();		//�����Ƿ�����
	string return_mima();		//��������


	void cunkuan();				//���
	void qukuan();				//ȡ��
	void zhuanzhang();			//ת��
	void chaxun();				//��ѯ
	void gaimi();				//����
	void zhuxiao();				//ע��
};

vector<Atm*> atm;		//���AtmԪ�ص�����
double Atm::z_yue = 0;
int Atm::count = 0;
void huanying();		//��ӭ����
void guanli();			//������
void denglu();			//��½����
void shouye(Atm *a1);			//�˻���ҳ����

Atm::Atm()
{
	int flag = 0;		//�����������һλΪ���֣������������һ��ֱ���ӵ�6

	/*��ʼ��*/
	yue = 0;			
	suoding = 0;
	cishu = 3;
	zhanghao = 10000+(++count);
	cout<<"����������:"<<endl;
	getline(cin, name);		//��������
	while(6 != flag)
	{
		flag = 0;
		cout<<"����������(�������Ϊ��λ����):"<<endl;
		getline(cin, mima);		//��������
		if(6 == mima.length())	//�������Ϊ��λ
		{
			int i = 0;
			while(i < 6)
			{
				if(!isdigit(mima[i]))
					break;
				flag++;
				i++;
			}
		}
	}
	cout<<"�˺�:"<<zhanghao<<endl<<endl;
	system("pause");
}

void Atm::xiugai()
{
	int flag = 0;
	string name_xiugai;
	string mima_xiugai;
	cout<<"����������:"<<endl;
	getline(cin, name_xiugai);		//��������
	while(6 != flag)
	{
		flag = 0;
		cout<<"����������(�������Ϊ��λ����):"<<endl;
		getline(cin, mima_xiugai);		//��������
		if(6 == mima_xiugai.length())	//�������Ϊ��λ
		{
			int i = 0;
			while(i < 6)
			{
				if(!isdigit(mima_xiugai[i]))
					break;
				flag++;
				i++;
			}
		}
	}
	system("pause");
	cout<<"\t�޸�ǰ:\n\t����:"<<name<<"\t����: "<<mima<<endl<<endl;

	cout<<"\t�޸ĺ�:\n\t����:"<<name_xiugai<<"\t����: "<<mima_xiugai<<endl;
	name = name_xiugai;
	mima = mima_xiugai;
}

void Atm::show(int i)
{
	cout<<i<<".\t�˺�:"<<zhanghao;
	if(1 == suoding)
		cout<<"(����)";
	else
		cout<<"(δ����)";
	cout<<"\t����: "<<name<<"\t����: "<<mima<<"\t���: "<<yue<<endl;
}

double Atm::return_zyue()
{
	return z_yue;
}

void Atm::set_suoding_jie()
{
	suoding = 0;
	cishu = 3;
}

void Atm::set_jine(double jine)
{
	yue += jine;
}

void Atm::set_suoding_suo()
{
	suoding = 1;
	cishu = 0;
	cout<<"���˺�������"<<endl;
}

int Atm::return_zhanghao()
{
	return zhanghao;
}

string Atm::return_mima()
{
	return mima;
}

int Atm::return_cishu()
{
	return cishu;
}

bool Atm::return_suoding()
{
	return suoding;
}

void Atm::set_cishu()
{
	cishu--;
}

void Atm::cunkuan()
{
	double jine;
	cout<<"��������Ҫ����Ľ��(����Ľ�������100�ı�������С�ڵ���10000Ԫ):";
	cin>>jine;
	if((int)jine%100 == 0 && jine <= 10000)
	{	
		yue+=jine;
		z_yue += jine;
	}
	else
		cout<<"������󣬷�����һҳ"<<endl;
}

void Atm::qukuan()
{
	double jine;
	cout<<"��������Ҫȡ��Ľ��(����Ľ�������100�ı�������С�ڵ���10000Ԫ):";
	cin>>jine;

	if((int)jine%100 == 0 && jine <= 10000)
	{	
		if(jine <= yue)
		{
			yue-=jine;
			z_yue -= jine;
		}
		else
			cout<<"����"<<endl;
	}
	else
		cout<<"������󣬷�����һҳ"<<endl;
}

void Atm::zhuanzhang()
{
	vector<Atm *>::iterator t = atm.begin();
	int zhanghao_zz;

	cout<<"��������Ҫת�˵��˺�: ";
	cin>>zhanghao_zz;
	
	for( ; t != atm.end(); t++)
	{
		if(zhanghao_zz == (*t)->zhanghao)
		{
			if(zhanghao_zz != zhanghao)	//���ܵ��ڱ��˺�
			{
				double jine;
				cout<<"��������Ҫת�˵Ľ��(����Ľ�������100�ı�������С�ڵ���10000Ԫ):";
				cin>>jine;

				if((int)jine%100 == 0 && jine <= 10000)
				{	
					if(jine <= yue)
					{
						yue -=jine;
						(*t)->set_jine(jine);
					}
					else
						cout<<"����"<<endl;
				}
				else
					cout<<"������󣬷�����һҳ"<<endl;
			}
			else
				cout<<"���ܸ��Լ�ת��"<<endl;
			break;
		}
	}
	if(t == atm.end())
		cout<<"���˺Ų�����"<<endl;
}

void Atm::chaxun()
{
	cout<<"\t���:"<<yue<<endl<<endl;
}

void Atm::gaimi()
{
	int flag = 0;
	string mima_gaimi;

	while(6 != flag)
	{
		flag = 0;
		cout<<"������������(�������Ϊ��λ����):"<<endl;
		getline(cin, mima);		//��������
		if(6 == mima.length())	//�������Ϊ��λ
		{
			int i = 0;
			while(i < 6)
			{
				if(!isdigit(mima[i]))
					break;
				flag++;
				i++;
			}
		}
	}
	cout<<"�����޸ĳɹ�"<<endl;
}




int main()
{
	huanying();

	return 0;
}

void huanying()
{
	string choose;
	
	Atm * a1 = 0;			//���������ڵ�Ԫ��	
	while(1)
	{
		system("cls");
		cout<<"\n\n\t\t\t***********************"<<endl;
		cout<<"\t\t\t* ��ӭʹ��Atm����ϵͳ *"<<endl;
		cout<<"\t\t\t***********************"<<endl;
		cout<<endl<<"\t\t\t1.ע��"<<endl;
		cout<<"\t\t\t2.��½"<<endl;
		cout<<"\t\t\t3.����"<<endl;
		cout<<"\t\t\t4.�˳�"<<endl;
		do{
			cout<<endl<<"\t\t\t���������ѡ��: ";
			getline(cin,choose);
			if(1 == choose.length() && isdigit(choose[0]) )	//�ж�������ַ��Ƿ�Ϊ1λ������
				break;
			else
				cout<<"\t\t\t����������1λ����"<<endl;
		}while(1);

		switch(choose[0])
		{
		case '1':				//ע��
			a1 = new Atm();
			atm.push_back(a1);
			a1 = 0;
			break;
		case '2':				//��½
			denglu();
			break;
		case '3':				//����
			guanli();
			break;
		case '4':
			return;				//�˳�������
			break;
		default:
			cout<<"\t\t\t����������1-4֮�������"<<endl;
			break;
		}
	}
}

void guanli()
{
	if(atm.size())		//���������Ԫ�ز�Ϊ0
	{
		int i = 0;
		int choose = 0;
		vector<Atm *>::iterator t = atm.begin();
		cout<<"Atm�����: "<<(*t)->return_zyue()<<endl;
		cout<<"ȫ����Ա��Ϣ:"<<endl;
		
		for( ; t != atm.end(); t++, i++)
			(*t)->show(i+1);
		t = atm.begin();
		
		cout<<"\tѡ����Ҫ�����ĳ�Ա��: ";

		cin>>choose;
		if(unsigned(choose) <= atm.size() && choose >= 1) 
		{
			int choose_1 = 0;
			Atm *a1 = (*(t+choose-1));
			cout<<"\t1.�����˺�"<<endl;
			cout<<"\t2.�����˺�"<<endl;
			cout<<"\t3.�޸���Ϣ"<<endl;
			cin>>choose_1;
			if(1 == choose_1)		//����
			{
				a1->set_suoding_suo();
			}
			else if(2 == choose_1)		//����
			{
				a1->set_suoding_jie();
				cout<<"���˺��ѽ���"<<endl;
			}
			else if(3 == choose_1)
			{
				getchar();
				a1->xiugai();
			}
			else
			{
				cout<<"�������,������ҳ"<<endl;
			}
		}
		else
		{
			cout<<"�ó�Ա�Ų�����,������ҳ"<<endl;
		}
	}
	else
	{
		cout<<"û�г�Ա"<<endl;
	}
	getchar();
	system("pause");
}

void denglu()
{
	int zhanghao_denglu;
	vector<Atm *>::iterator t = atm.begin();

	cout<<"�������˺�: ";
	cin>>zhanghao_denglu;
	
	for( ; t != atm.end(); t++)
	{
		if((*t)->return_zhanghao() == zhanghao_denglu)
		{
			if(0 == (*t)->return_suoding())
			{
				string mima_denglu;
				int flag = 0;
				getchar();
				while(6 != flag || 0 != (*t)->return_cishu())	//��λ���붼Ϊ������ʣ���½������Ϊ����,���߻��е�½����
				{
					flag = 0;
					cout<<"����������(�������Ϊ��λ����),����";
					if((*t)->return_cishu() == 3)
						cout<<3;
					else if((*t)->return_cishu() == 2)
						cout<<2;
					else 
						cout<<1;
					cout<<"���������"<<endl;
					getline(cin, mima_denglu);		//��������
					if(mima_denglu == (*t)->return_mima())
					{
						(*t)->set_suoding_jie();
						shouye(*t);
					}
					if(6 == mima_denglu.length())	//�������Ϊ��λ
					{
						int i = 0;
						while(i < 6)
						{
							if(!isdigit(mima_denglu[i]))
								break;
							flag++;
							i++;
						}
						(*t)->set_cishu();
					}
				}
				if(0 == (*t)->return_cishu())
				{	
					(*t)->set_suoding_suo();
					cout<<"���˺��ѱ�����,����ϵ����Ա����"<<endl;
				}
			}
			else
			{
				cout<<"���˺��ѱ�����,����ϵ����Ա����"<<endl;
			}
			break;
		}
	}
	if(t == atm.end())
		cout<<"δ�ҵ����˺ţ�������ҳ"<<endl;

	system("pause");
}

void shouye(Atm *a1)
{
	string choose;

	while(1)
	{
		system("cls");
		cout<<"\t1.���"<<endl;
		cout<<"\t2.ȡ��"<<endl;
		cout<<"\t3.ת��"<<endl;
		cout<<"\t4.��ѯ"<<endl;
		cout<<"\t5.����"<<endl;
		cout<<"\t6.ע��"<<endl;

		do{
			cout<<endl<<"\t���������ѡ��: ";
			getline(cin,choose);
			if(1 == choose.length() && isdigit(choose[0]) )	//�ж�������ַ��Ƿ�Ϊ1λ������
				break;
			else
				cout<<"\t\t\t����������1λ����"<<endl;
		}while(1);

		switch(choose[0])
		{
		case '1':				//���
			a1->cunkuan();
			break;
		case '2':				//ȡ��
			a1->qukuan();
			break;
		case '3':				//ת��
			a1->zhuanzhang();
			break;
		case '4':				//��ѯ
			a1->chaxun();
			break;
		case '5':				//����
			a1->gaimi();
			break;
		case '6':				//ע��
			huanying();
			break;
		default:
			cout<<"\t\t\t����������1-6֮�������"<<endl;
			break;
		}
		getchar();
		system("pause");
	}
}