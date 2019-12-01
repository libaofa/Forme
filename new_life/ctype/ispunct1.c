#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 't';
   int var2 = '1';
   int var3 = '/';
   int var4 = ' ';

   if( ispunct(var1) )
   {
       printf("var1 = |%c| 是标点符号字符\n", var1 );
   }
   else
   {
       printf("var1 = |%c| 不是标点符号字符\n", var1 );
   }
   if( ispunct(var2) )
   {
       printf("var2 = |%c| 是标点符号字符\n", var2 );
   }
   else
   {
       printf("var2 = |%c| 不是标点符号字符\n", var2 );
   }
   if( ispunct(var3) )
   {
       printf("var3 = |%c| 是标点符号字符\n", var3 );
   }
   else
   {
       printf("var3 = |%c| 不是标点符号字符\n", var3 );
   }
   if( ispunct(var4) )
   {
       printf("var4 = |%c| 是标点符号字符\n", var4 );
   }
   else
   {
       printf("var4 = |%c| 不是标点符号字符\n", var4 );
   }
   
   return(0);
}  

/*
	var1 = |t| 不是标点符号字符
	var2 = |1| 不是标点符号字符
	var3 = |/| 是标点符号字符
	var4 = | | 不是标点符号字符
	
	ispunct函数判断变量是否为标点符号， 如果是返回非0值，否则0
*/

