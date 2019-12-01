#include <stdio.h>
#include <ctype.h>

int main()
{
	int z = 0;
    
	for(z = 'a'; z <= 'z'; z++)
		if(isupper(z))
			printf("%c is upper\n", z);
		else
			printf("%c is lower\n", z);
	for(z = 'A'; z <= 'Z'; z++)
		if(isupper(z))
			printf("%c is upper\n", z);
		else
			printf("%c is lower\n", z);
   
   return(0);
}

/*
	lbf
	2019/11/14
	isupper判断变量是否一个大写字母，是则该函数返回非零值（true），否则返回 0（false）。
*/