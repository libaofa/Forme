#include "lbf.h"        /*调用自定义库函数lbf.h*/

void Water(ATM *P1)     /*流水函数*/
{
    std::ifstream pt(P1->file.c_str(), std::ios_base::in);      /*1️⃣写方式打开文件*/
    if(!pt.is_open())                       /*打开失败*/
    {
        std::cerr<<"打开失败"<<std::endl;   /*错误输出*/
        exit(-1);           /*退出程序*/
    }
    else                    /*打开成功*/
    {
        string str;         /*声明一个string类对象保存文字*/
        while(getline(pt, str, '*'))    /*读取一行文字，遇到*读取下一行*/
        {
            cout<<str;                  /*输出文字*/
        }
    }
    pt.close();             /*关闭文件*/
    cout<<endl;             /*输出*/
    system("pause");        /*暂停*/
}
