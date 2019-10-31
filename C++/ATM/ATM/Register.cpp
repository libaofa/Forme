#include "lbf.h"                /*调用自定义库函数lbf.h*/

ATM *Rigister(ATM *Phead)       /*定义成员注册函数*/
{
    string Name_R;                                  /*声明一个string类对象作为输入的名字*/
    string string_R = "      ";                   /*定义一个string类对象作为输入的第一次密码*/
    string string_R1 = "      ";                  /*定义一个string类对象作为输入的第二次密码*/
    string Frond_f = "G:\\1编程\\C++\\vs2012\\ATM\\流水\\"; /*定义一个string类对象作为文件的位置*/
    string Back_f = ".txt";                         /*定义一个string类对象作为文件的类型*/
    int i = 0;                                      /*定义一个整形变量作为后面的计数用*/
    cout<<"密码最多输入六位6字,两遍密码必须相同,否则重新输入"<<endl;   /*输出*/
    cout<<"存入金额初始化为0"<<endl<<endl;                             /*输出*/
    cout<<"请输入用户名:";                                             /*输出*/
    cin>>Name_R;                        /*输入姓名*/
    int Choice_cc = 0;                  /*定义一个整形变量获取输入*/
    cout<<"\n按ESC退出,其余按键继续\n"; /*输出*/
    if((Choice_cc = getch()) == 27)     /*键入一个字符,如果字符的ASCII码为27*/
    {
        system("pause");    /*暂停*/
        Frist(Phead);       /*跳转到首页函数*/
    }

    cout<<endl<<"请输入密码:";          /*输出*/
    for(i = 0; i < 6;)                  /*六次循环*/
    {
        string_R[i] = getch();        /*键入字符给字符到string_R[i]*/
        if((string_R[i] >= '0' && string_R[i] <= '9') || string_R[i] == '\b') /*如果键入的字符在0~9之间或者回车符*/
        {
            if(string_R[i] == '\b' && i > 0)  /*如果输入的是回车符且i>0*/
            {
                cout<<'\b'<<' '<<'\b';          /*删除一个字符*/
                i--;                            /*i自减*/
                continue;                       /*进行下一次循环*/
            }
            cout<<"*";      /*输出*隐藏数字*/
            i++;            /*i自加*/
        }
    }
    cout<<"\n按ESC退出,其余按键继续\n";         /*输出*/
    if((Choice_cc = getch()) == 27)             /*键入一个字符,如果字符的ASCII码为27*/
    {
        system("pause");    /*暂停*/
        Frist(Phead);       /*跳转到首页函数*/
    }

    cout<<endl<<"请再次输入密码:";             /*输出*/
    for(i = 0; i < 6; )                        /*6次循环*/
    {
        string_R1[i] = getch();              /*键入字符给字符到string_R_1[i]*/
        if((string_R1[i] >= '0' && string_R1[i] <= '9') || string_R1[i] == '\b')  /*如果键入的字符在0~9之间或者回车符*/
        {
            if(string_R1[i] == '\b' && i > 0) /*如果输入的是回车符且i>0*/
            {
                cout<<'\b'<<' '<<'\b';          /*删除一个字符*/
                i--;        /*i自减*/
                continue;   /*进行下一次循环*/
            }
            cout<<"*";      /*输出*隐藏数字*/
            i++;            /*i自加*/
        }
    }
    cout<<endl;             /*输出*/

    if(string_R.compare(string_R1) == 0)    /*如果两个类对象中的内容相同*/
    {
        ATM *P1 = Phead;    /*将头结点的地址拷贝给P1*/
        ATM *P2 = new ATM;  /*定义一个对象，并创建空间*/

        while(P1->Pnext != NULL)                /*如果P1的尾节点的地址不为空*/
            P1 = P1->Pnext;                     /*将P1的尾节点的地址拷贝给P1*/

        P1->Pnext = P2;                         /*将P2连接在P1的后面*/
        ++P2->Count;                            /*静态变量自加,成员加一*/
        P2->Name_change(Name_R);                /*通过调用共有成员函数,将Name_R拷贝给Name*/
        P2->Password_change(string_R);        /*通过调用共有成员函数,将string_R拷贝给string*/
        P2->Pnext = NULL;                       /*设P2的为节点的地址为空*/
        string File = "                    ";   /*定义一个string对象作为文件名*/
		srand((unsigned)time(NULL));                      /*将当前时间作为随机数的种子*/
        for(int i = 0; i < 20; i++)             /*20次循环*/
            File[i] = char(rand()%10+48);       /*将0~9的数字随机赋值给File[i]*/
        P2->file = Frond_f + File + Back_f;     /*将文件位置,文件名,文件类型内容加在一起赋值给file*/
        std::ofstream pt(P2->file.c_str());     /*以读取方式打开文件名为file中的内中的文件*/
        pt<<"用户名:"<<P2->_Name()<<'*'<<endl;  /*用户名读取置文件*/
        pt.close();                             /*关闭文件*/
        system("cls");                          /*清屏*/
        cout<<"注册成功"<<endl;                 /*输出*/
        cout<<"您的账号为"<<P2->Number<<endl;   /*输出*/
        cout<<"您的用户名为"<<Name_R<<endl<<endl;     /*输出*/
        system("pause");/*暂停*/

        return Phead;   /*返回头结点给调用函数*/
    }
    else        /*如果两次密码不相同*/
    {
        cerr<<"两次密码不一致,请重新输入."; /*输出*/
        system("pause");    /*暂停*/
        system("cls");      /*清屏*/
        Rigister(Phead);    /*跳至注册函数*/

        return 0;           /*返回值为0*/
    }
}
