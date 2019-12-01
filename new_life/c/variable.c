#include <stdio.h>
 
// 函数外定义变量 x 和 y
int x;
int y;
int addtwonum()
{
    // 函数内声明变量 x 和 y 为外部变量
    extern int x;
    extern int y;
    // 给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}
 
int main()
{
    int result;
    // 调用函数 addtwonum
    result = addtwonum();
    
    printf("result 为: %d\n",result);
	printf("x = %d\ty = %d\n",x,y);

    return 0;
}


/*在子函数里通过extern声明变量x,y调用的就是全局变量x,y*/