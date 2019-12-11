<<<<<<< HEAD
#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 'a';
   int j = '0';
   int k = 'A';
    
   for(; i <= 'z'; i++)
	    if(islower(i))
			printf("%c is lower!", i);
		else 
			printf("%c isn't lower!", i);
	   
   for(; j <= '9'; j++)
		if(islower(j))
			printf("%c is lower!", j);
		else 
			printf("%c isn't lower!", j);
		
   for(; k <= 'Z'; k++)
		if(islower(k))
			printf("%c is lower!", k);
		else 
			printf("%c isn't lower!", k);
   
   return(0);
}

/*
	lbf
	2019/11/4
	
	islower函数用于判断变量是否为小写字符，如果是返回1，否则为0
=======
#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 'a';
   int j = '0';
   int k = 'A';
    
   for(; i <= 'z'; i++)
	    if(islower(i))
			printf("%c is lower!", i);
		else 
			printf("%c isn't lower!", i);
	   
   for(; j <= '9'; j++)
		if(islower(j))
			printf("%c is lower!", j);
		else 
			printf("%c isn't lower!", j);
		
   for(; k <= 'Z'; k++)
		if(islower(k))
			printf("%c is lower!", k);
		else 
			printf("%c isn't lower!", k);
   
   return(0);
}

/*
	lbf
	2019/11/4
	
	islower函数用于判断变量是否为小写字符，如果是返回1，否则为0
>>>>>>> 74cce2bef85dc01e4d8ba6caea806de5295bd012
*/