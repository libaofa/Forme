#include <stdio.h>
#include <ctype.h>

int main()
{
	short a = 0;
	
	for(a = 0; a < 128; a++)
	{
		putchar(a);
		if(isalnum(a))
			printf("\tIt's alnum\n");
		else
			printf("\tIt isn't alnum\n");
	}

	return 0;
}

/*
	lbf
	2019.10.31 
	20:51
	该函数定义在ctype.h头文件内，当函数isalnum内的值为数字或字母的话，
	返回值为1，否则为0。
*/
