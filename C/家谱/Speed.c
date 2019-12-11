#include "lbf.h"

void Speed()    ///加载,函数体
{
    int i = 1;///声明while中变量i的值
	int j = 0;
    while(i <= 20)///当i<10时,进行一下循环体
    {
        printf("请稍后...\n");
        j = 0;///每次循环都将0赋值给j
        while(j < i + 1)///当j<i+1时,进行如下循环体
        {
            printf("▇");
            j++;///使循环中的j+1
        }
		printf("%%%d",5*i);
        i++;///使循环中的i+1
        Sleep(100);///延时函数,头文件为windows.h,延时300毫秒
        system("cls");///清屏函数,头文件为stdio.h,清除提示符中的所有函数,但不影响接下来的操作
    }
}