#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 't';
   int var2 = '1';
   int var3 = ' ';

   if( isspace(var1) )
   {
       printf("var1 = |%c| 是空白字符\n", var1 );
   }
   else
   {
       printf("var1 = |%c| 不是空白字符\n", var1 );
   }
   if( isspace(var2) )
   {
       printf("var2 = |%c| 是空白字符\n", var2 );
   }
   else
   {
       printf("var2 = |%c| 不是空白字符\n", var2 );
   }
   if( isspace(var3) )
   {
       printf("var3 = |%c| 是空白字符\n", var3 );
   }
   else
   {
       printf("var3 = |%c| 不是空白字符\n", var3 );
   }
   
   return(0);
}

/*
	var1 = |t| 不是空白字符
	var2 = |1| 不是空白字符
	var3 = | | 是空白字符
	isspace函数判断变量是一个空白字符，则该函数返回非零值（true），否则返回 0（false）
*/