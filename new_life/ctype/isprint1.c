#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'k';
   int var2 = '8';
   int var3 = '\t';
   int var4 = ' ';
    
   if( isprint(var1) )
   {
      printf("'k' = |%c| 是可打印的\n", var1 );
   }
   else
   {
      printf("'k' = |%c| 是不可打印的\n", var1 );
   }
   if( isprint(var2) )
   {
      printf("'8' = |%c| 是可打印的\n", var2 );
   }
   else
   {
      printf("'8' = |%c| 是不可打印的\n", var2 );
   }
   if( isprint(var3) )
   {
      printf("'\t' = |%c| 是可打印的\n", var3 );
   }
   else
   {
      printf("'\t' = |%c| 是不可打印的\n", var3 );
   }
   if( isprint(var4) )
   {
      printf("' ' = |%c| 是可打印的\n", var4 );
   }
   else
   {
      printf("' ' = |%c| 是不可打印的\n", var4 );
   }
   
   return(0);
}   

/*
	lbf	
	isprint函数，如果变量是可打印的字符，则返回1，否则返回0
	类似\t \r \b \n之类的字符都是不可打印的

*/