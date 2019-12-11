#include "lbf.h"                /*调用自定义库函数lbf.h*/

void Tighten(ATM *P1, ATM *Phead)   /*该幂函数*/
{
    string Password_T = "      ";   /*定义有一个string类对象*/
    string Password_R = "      ";   /*定义有一个string类对象*/
    string Password_R1 = "      ";  /*定义有一个string类对象*/
    int i = 0;          /*定义一个整形变量作为计数*/

    cout<<"请输旧密码:";         /*输出*/
    for(i = 0; i < 6;)           /*6次循环*/
    {
        Password_T[i] = getch();    /*输入一个字符*/
        if((Password_T[i] >= '0' && Password_T[i] <= '9') || Password_T[i] == '\b')  /*如果键入的字符在0~9之间或者回车符*/
        {
            if(Password_T[i] == '\b')   /*如果输入的是回车符且i>0*/
            {
                cout<<'\b'<<' '<<'\b';  /*删除一个字符*/
                i--;            /*i自减*/
                continue;       /*进行下一次循环*/
            }
            cout<<"*";          /*输出*隐藏数字*/
            i++;                /*i自加*/
        }
    }
    if(Password_T.compare(P1->_Password()) == 0)     /*如果两个类对象中的内容相同*/
    {
        cout<<endl<<"请输入新密码:";      /*输出*/
        for(i = 0; i < 6;)          /*6次循环*/
        {
            Password_R[i] = getch();        /*输入一个字符*/
            if((Password_R[i] >= '0' && Password_R[i] <= '9' ) || Password_R[i] == '\b')    /*如果键入的字符在0~9之间或者回车符*/
            {
                if(Password_R1[i] == '\b')  /*如果输入的是回车符且i>0*/
                {
                    cout<<'\b'<<' '<<'\b';  /*删除一个字符*/
                    i--;        /*i自减*/
                    continue;   /*进行下一次循环*/
                }
                cout<<"*";      /*输出*隐藏数字*/
                i++;            /*i自加*/
            }
        }

        cout<<endl<<"请再次输入新密码:";        /*输出*/
        for(i = 0; i < 6;)                      /*6次循环*/
        {
            Password_R1[i] = getch();           /*输入一个字符*/
            if((Password_R1[i] >= '0' && Password_R1[i] <= '9') || Password_R1[i] == '\b')  /*如果键入的字符在0~9之间或者回车符*/
            {
                if(Password_R1[i] == '\b')  /*如果输入的是回车符且i>0*/
                {
                    cout<<'\b'<<' '<<'\b';  /*删除一个字符*/
                    i--;        /*i自减*/
                    continue;   /*进行下一次循环*/
                }
                cout<<"*";      /*输出*隐藏数字*/
                i++;            /*i自加*/
            }
        }
        cout<<endl;             /*输出换行*/


        if(Password_R.compare(Password_R1) == 0)     /*如果两个类对象中的内容相同*/
        {
            Sleep(700);                         /*延时0.7秒*/
            system("cls");                      /*清屏*/
            cout<<"修改成功,返回上一页"<<endl;  /*输出*/
            P1->Password_change(Password_R);    /*调用成员函数修改Password*/
            system("pause");            /*暂停*/
            system("cls");              /*清屏*/
            Function(P1, Phead);        /*调用功能函数*/
        }
        else                            /*如果两个类对象中的内容不相同*/
        {
            Sleep(700);                 /*延时0.7秒*/
            system("cls");              /*清屏*/
            cerr<<"两次新密码输入不同,修改失败"<<endl;   /*错误输出*/
            system("pause");            /*暂停*/
            system("cls");              /*清屏*/
            Function(P1, Phead);        /*调用功能函数*/
        }
    }
    else                /*如果两个类对象中的内容相同*/
    {
        Sleep(700);     /*延时0.7秒*/
        system("cls");  /*清屏*/
        cerr<<"密码错误,返回上一页"<<endl;   /*错误输出*/
        system("pause");        /*暂停*/
        system("cls");          /*清屏*/
        Function(P1, Phead);    /*调用功能函数*/
    }
}
