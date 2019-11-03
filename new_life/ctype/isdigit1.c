#include <stdio.h>
#include <ctype.h>

int main()
{
    char a = '1';
    
	char b = 'a';
	
    if( isdigit(a) )
	{
		printf("a = |%c| 是一个数字\n", var1 );
	}
	else
	{
		printf("a = |%c| 不是一个数字\n", var1 );
	}
	if( isdigit(b) )
	{
		printf("b = |%c| 是一个数字\n", var2 );
	}
	else
	{
		printf("b = |%c| 不是一个数字\n", var2 );
	}
  
   return(0);
}

/*
	lbf	
	2019/11/3
	isdigit函数，用于判断变量是否为十进制数字，
	如果是十进制数字，则返回1，否则返回0.

*/