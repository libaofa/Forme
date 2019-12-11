#include "lbf.h"        /*调用自定义库函数lbf.h*/

int main()              /*主函数,函数的入口*/
{
    ATM *Phead = new ATM;           /*声明头指针,并为其开辟空间*/
    Phead->Pnext = NULL;            /*将头指针的节点地址设置为0*/
    string one = "管理员";          /*string类*/
    string two = "000000";          /*string类*/
    Phead->Name_change(one);        /*将 管理员 作为实参传递给头指针的Name_change函数*/
    Phead->Password_change(two);    /*将000000作为实参传递给头指针的Password_change函数*/
    Phead = Ifstream(Phead);        /*调用文件存入函数*/
    Phead->Number = 0;              /*将头结点的位置设置为0*/
    Phead->file = "G:\\1编程\\C++\\vs2012\\ATM\\流水\\记录"; /*定义一个string类对象作为文件的位置*/
    line li;
    SYSTEMTIME time;        /*声明一个系统时间的结构体*/
    GetLocalTime(&time);    /*调用本地时间*/		
    int sum = 0;			/*判断跳出循环*/
    std::ifstream pp( Phead->file.c_str(), std::ios_base::binary);	/*以写方式打开txt文件*/
	if(!pp.is_open())						/*打开失败*/
	{
		std::ofstream
		ps( Phead->file.c_str(), std::ios_base::trunc | std::ios_base::binary);	/*若文件存在则设文件大小为0k*/
		ps.close();							/*关闭文件*/
	}
	else									/*打开成功*/
	{
		while(!pp.eof())					/*未到文件尾*/
		{
			pp.read((char *)&li, sizeof(line));		/*将文件存入结构体*/
			if(pp.eof())							/*读取到文件尾*/
				break;								/*退出循环*/
			if(li.timer[0] == (long)time.wYear && li.timer[1] == (long)time.wMonth &&li.timer[2] == (long)time.wDay && !pp.eof())/*任意一个值和时间相同未到文件尾*/
				++sum;								/*sum自加1*/
			++Phead->day;				/*计算个数*/
		}
		pp.close();							/*关闭文件*/
	}
	if(sum == 0)						/*sum = 0*/
	{
		std::ofstream pt(Phead->file.c_str(), std::ios_base::app | std::ios_base::binary);		/*以写在末尾的方式打开文件*/
		li.timer[0] = (long)time.wYear;		/*将结构体变量设置为年份*/
		li.timer[1] = (long)time.wMonth;	/*将结构体变量设置为月份*/
		li.timer[2] = (long)time.wDay;		/*将结构体变量设置为日*/
		li.a = 0;							/*存入金额*/
		li.b = 0;							/*取出金额*/
		li.c = li.a-li.b;					/*净值*/
		pt.write((char *)&li, sizeof(line));/*将结构体存入文件*/
			
		pt.close();							/*关闭文件*/	
	}

    Frist(Phead);                   /*调用首页子函数*/

    //return 0;                       /*向计算机返回数值0*/
}

ATM *Ifstream(ATM *Phead)           /*定义文件存入函数*/
{
    ATM *PXX = Phead;               /*将头结点拷贝到PXX*/
    string Name_in;                 /*声明一个string类的变量,作为成员的姓名*/
    string Password_in;             /*声明一个string类的变量,作为成员的密码*/
    double Balance_in = 0;          /*声明一个整形的变量,作为成员的账户余额*/

    std::ifstream file("ATM.txt");  /*已写入方式打开名为ATM.txt的文件*/
    if(!file.is_open())             /*如果打开失败*/
    {
        cerr<<"ATM.txt文件打开失败,文件将自动创建"<<endl;    /*输出*/
        std::ifstream file("ATM.txt"); /*以写入与删除并创建方式打开ATM.txt文件*/
        Phead->Count = 0;           /*将静态变量Count置为0*/
        system("pause");            /*暂停*/
    }
    else                            /*如果打开成功*/
    {
        while(!file.eof())          /*如果没有读取到文件末尾*/
        {
            ATM *P1 = new ATM;                  /*声明一个对象并开辟一个大小为sizeof(ATM)空间*/
            file>>P1->Number;                   /*将文件中的内容存入P1的Number中*/
            file>>P1->State;                    /*将文件中的内容存入P1的State中*/
            file>>Balance_in;                   /*将文件中的内容存入P1的Balance_in中*/
            P1->Balance_plus(Balance_in);       /*通过调用类中公共成员函数将Balance_in中的内容存入类中的Balance*/
            file>>Password_in;                  /*将文件中的内容存入P1的Password_in中*/
            P1->Password_change(Password_in);   /*通过调用类中公共成员函数将Password_in中的内容存入类中的Password*/
            file>>Name_in;                      /*将文件中的内容存入P1的Name_in中*/
            P1->Name_change(Name_in);           /*通过调用类中公共成员函数将Name_in中的内容存入类中的Name*/
            file>>P1->file;                     /*将文件中的内容存入P1的fail中*/
            ++P1->Count;                        /*静态变量Count自加,成员加一*/
            P1->Pnext = NULL;                   /*将P1的尾指针设为NULL*/
            if(file.peek() == EOF)              /*如果到达文件尾防止最后一个成员调用两次*/
            {
                --P1->Count;                    /*静态变量Count自减,成员减一*/
                delete P1;                      /*释放P1的空间*/
                break;                          /*跳出循环*/
            }
            PXX->Pnext = P1;                    /*将P1接在PXX的后面*/
            PXX = P1;                           /*将P1的地址拷贝给PXX*/
        }
        --PXX->Count;                           /*静态变量Count自减,成员减一*/
        file.close();                           /*关闭文件*/
    }

    return Phead;                               /*返回头结点给调用函数*/
}
