#include "widget.h"					//调用widget.h头文件
#include <QApplication>				//调用QApplication头文件

int main(int argc, char *argv[])	//主函数
{
    QApplication a(argc, argv);		//声明Application类的对象a
									//参数为命令行的参数列表数目和参数列表
    Widget w;						//声明Widget类的对象w，(窗口)			
    w.show();						//显示窗口
	
    return a.exec();				//程序运行交给Qt处理，进入程序的循环状态(事务循环)
}
