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
	string name;	//姓名
	string mima;	//密码
	int zhanghao;	//账号
	double yue;		//余额,初始为0
	bool suoding;	//锁定账号,0未锁定，1锁定
	int cishu;		//剩余输入次数，初始为3
	static double z_yue;	//Atm总余额，初始为0
	static int count;		//账号个数
	
public:
	Atm();			//构造函数，用于注册
	~Atm();			//析构函数，释放空间
	void show(int i);	//显示成员信息
	static double return_zyue();	//返回总余额信息
	void set_suoding_jie();		//解锁函数
	void set_suoding_suo();		//锁定函数
	void xiugai();				//修改函数
	int return_zhanghao();		//返回账号
	int return_cishu();			//返回可登陆次数
	void set_jine(double jine);	//设置金额
	void set_cishu();			//设置可登陆次数
	bool return_suoding();		//返回是否锁定
	string return_mima();		//返回密码


	void cunkuan();				//存款
	void qukuan();				//取款
	void zhuanzhang();			//转账
	void chaxun();				//查询
	void gaimi();				//改密
	void zhuxiao();				//注销
};

vector<Atm*> atm;		//存放Atm元素的容器
double Atm::z_yue = 0;
int Atm::count = 0;
void huanying();		//欢迎函数
void guanli();			//管理函数
void denglu();			//登陆函数
void shouye(Atm *a1);			//账户首页函数

Atm::Atm()
{
	int flag = 0;		//如果密码遇到一位为数字，则将这个变量加一，直到加到6

	/*初始化*/
	yue = 0;			
	suoding = 0;
	cishu = 3;
	zhanghao = 10000+(++count);
	cout<<"请输入姓名:"<<endl;
	getline(cin, name);		//输入姓名
	while(6 != flag)
	{
		flag = 0;
		cout<<"请输入密码(密码必须为六位数字):"<<endl;
		getline(cin, mima);		//输入姓名
		if(6 == mima.length())	//如果密码为六位
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
	cout<<"账号:"<<zhanghao<<endl<<endl;
	system("pause");
}

void Atm::xiugai()
{
	int flag = 0;
	string name_xiugai;
	string mima_xiugai;
	cout<<"请输入姓名:"<<endl;
	getline(cin, name_xiugai);		//输入姓名
	while(6 != flag)
	{
		flag = 0;
		cout<<"请输入密码(密码必须为六位数字):"<<endl;
		getline(cin, mima_xiugai);		//输入姓名
		if(6 == mima_xiugai.length())	//如果密码为六位
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
	cout<<"\t修改前:\n\t姓名:"<<name<<"\t密码: "<<mima<<endl<<endl;

	cout<<"\t修改后:\n\t姓名:"<<name_xiugai<<"\t密码: "<<mima_xiugai<<endl;
	name = name_xiugai;
	mima = mima_xiugai;
}

void Atm::show(int i)
{
	cout<<i<<".\t账号:"<<zhanghao;
	if(1 == suoding)
		cout<<"(锁定)";
	else
		cout<<"(未锁定)";
	cout<<"\t姓名: "<<name<<"\t密码: "<<mima<<"\t余额: "<<yue<<endl;
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
	cout<<"该账号已锁定"<<endl;
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
	cout<<"请输入想要存入的金额(存入的金额必须是100的倍数，且小于等于10000元):";
	cin>>jine;
	if((int)jine%100 == 0 && jine <= 10000)
	{	
		yue+=jine;
		z_yue += jine;
	}
	else
		cout<<"输入错误，返回上一页"<<endl;
}

void Atm::qukuan()
{
	double jine;
	cout<<"请输入想要取款的金额(存入的金额必须是100的倍数，且小于等于10000元):";
	cin>>jine;

	if((int)jine%100 == 0 && jine <= 10000)
	{	
		if(jine <= yue)
		{
			yue-=jine;
			z_yue -= jine;
		}
		else
			cout<<"余额不足"<<endl;
	}
	else
		cout<<"输入错误，返回上一页"<<endl;
}

void Atm::zhuanzhang()
{
	vector<Atm *>::iterator t = atm.begin();
	int zhanghao_zz;

	cout<<"请输入想要转账的账号: ";
	cin>>zhanghao_zz;
	
	for( ; t != atm.end(); t++)
	{
		if(zhanghao_zz == (*t)->zhanghao)
		{
			if(zhanghao_zz != zhanghao)	//不能等于本账号
			{
				double jine;
				cout<<"请输入想要转账的金额(存入的金额必须是100的倍数，且小于等于10000元):";
				cin>>jine;

				if((int)jine%100 == 0 && jine <= 10000)
				{	
					if(jine <= yue)
					{
						yue -=jine;
						(*t)->set_jine(jine);
					}
					else
						cout<<"余额不足"<<endl;
				}
				else
					cout<<"输入错误，返回上一页"<<endl;
			}
			else
				cout<<"不能给自己转账"<<endl;
			break;
		}
	}
	if(t == atm.end())
		cout<<"该账号不存在"<<endl;
}

void Atm::chaxun()
{
	cout<<"\t余额:"<<yue<<endl<<endl;
}

void Atm::gaimi()
{
	int flag = 0;
	string mima_gaimi;

	while(6 != flag)
	{
		flag = 0;
		cout<<"请输入新密码(密码必须为六位数字):"<<endl;
		getline(cin, mima);		//输入姓名
		if(6 == mima.length())	//如果密码为六位
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
	cout<<"密码修改成功"<<endl;
}




int main()
{
	huanying();

	return 0;
}

void huanying()
{
	string choose;
	
	Atm * a1 = 0;			//声明容器内的元素	
	while(1)
	{
		system("cls");
		cout<<"\n\n\t\t\t***********************"<<endl;
		cout<<"\t\t\t* 欢迎使用Atm自助系统 *"<<endl;
		cout<<"\t\t\t***********************"<<endl;
		cout<<endl<<"\t\t\t1.注册"<<endl;
		cout<<"\t\t\t2.登陆"<<endl;
		cout<<"\t\t\t3.管理"<<endl;
		cout<<"\t\t\t4.退出"<<endl;
		do{
			cout<<endl<<"\t\t\t请键入您的选择: ";
			getline(cin,choose);
			if(1 == choose.length() && isdigit(choose[0]) )	//判断输入的字符是否为1位的数字
				break;
			else
				cout<<"\t\t\t请重新输入1位数字"<<endl;
		}while(1);

		switch(choose[0])
		{
		case '1':				//注册
			a1 = new Atm();
			atm.push_back(a1);
			a1 = 0;
			break;
		case '2':				//登陆
			denglu();
			break;
		case '3':				//管理
			guanli();
			break;
		case '4':
			return;				//退出本函数
			break;
		default:
			cout<<"\t\t\t请重新输入1-4之间的数字"<<endl;
			break;
		}
	}
}

void guanli()
{
	if(atm.size())		//如果容器内元素不为0
	{
		int i = 0;
		int choose = 0;
		vector<Atm *>::iterator t = atm.begin();
		cout<<"Atm总余额: "<<(*t)->return_zyue()<<endl;
		cout<<"全部成员信息:"<<endl;
		
		for( ; t != atm.end(); t++, i++)
			(*t)->show(i+1);
		t = atm.begin();
		
		cout<<"\t选择想要操作的成员号: ";

		cin>>choose;
		if(unsigned(choose) <= atm.size() && choose >= 1) 
		{
			int choose_1 = 0;
			Atm *a1 = (*(t+choose-1));
			cout<<"\t1.锁定账号"<<endl;
			cout<<"\t2.解锁账号"<<endl;
			cout<<"\t3.修改信息"<<endl;
			cin>>choose_1;
			if(1 == choose_1)		//锁定
			{
				a1->set_suoding_suo();
			}
			else if(2 == choose_1)		//解锁
			{
				a1->set_suoding_jie();
				cout<<"该账号已解锁"<<endl;
			}
			else if(3 == choose_1)
			{
				getchar();
				a1->xiugai();
			}
			else
			{
				cout<<"输入错误,返回首页"<<endl;
			}
		}
		else
		{
			cout<<"该成员号不存在,返回首页"<<endl;
		}
	}
	else
	{
		cout<<"没有成员"<<endl;
	}
	getchar();
	system("pause");
}

void denglu()
{
	int zhanghao_denglu;
	vector<Atm *>::iterator t = atm.begin();

	cout<<"请输入账号: ";
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
				while(6 != flag || 0 != (*t)->return_cishu())	//六位密码都为数字且剩余登陆次数不为数字,或者还有登陆机会
				{
					flag = 0;
					cout<<"请输入密码(密码必须为六位数字),还有";
					if((*t)->return_cishu() == 3)
						cout<<3;
					else if((*t)->return_cishu() == 2)
						cout<<2;
					else 
						cout<<1;
					cout<<"次输入机会"<<endl;
					getline(cin, mima_denglu);		//输入密码
					if(mima_denglu == (*t)->return_mima())
					{
						(*t)->set_suoding_jie();
						shouye(*t);
					}
					if(6 == mima_denglu.length())	//如果密码为六位
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
					cout<<"该账号已被锁定,请联系管理员解锁"<<endl;
				}
			}
			else
			{
				cout<<"该账号已被锁定,请联系管理员解锁"<<endl;
			}
			break;
		}
	}
	if(t == atm.end())
		cout<<"未找到该账号，返回首页"<<endl;

	system("pause");
}

void shouye(Atm *a1)
{
	string choose;

	while(1)
	{
		system("cls");
		cout<<"\t1.存款"<<endl;
		cout<<"\t2.取款"<<endl;
		cout<<"\t3.转账"<<endl;
		cout<<"\t4.查询"<<endl;
		cout<<"\t5.改密"<<endl;
		cout<<"\t6.注销"<<endl;

		do{
			cout<<endl<<"\t请键入您的选择: ";
			getline(cin,choose);
			if(1 == choose.length() && isdigit(choose[0]) )	//判断输入的字符是否为1位的数字
				break;
			else
				cout<<"\t\t\t请重新输入1位数字"<<endl;
		}while(1);

		switch(choose[0])
		{
		case '1':				//存款
			a1->cunkuan();
			break;
		case '2':				//取款
			a1->qukuan();
			break;
		case '3':				//转账
			a1->zhuanzhang();
			break;
		case '4':				//查询
			a1->chaxun();
			break;
		case '5':				//改密
			a1->gaimi();
			break;
		case '6':				//注销
			huanying();
			break;
		default:
			cout<<"\t\t\t请重新输入1-6之间的数字"<<endl;
			break;
		}
		getchar();
		system("pause");
	}
}