#include <stdio.h>
#include <ctype.h>

int main ()
{
   int i = 0, j = 0;
   char str1[] = "all \a about \t programming";
   char str2[] = "hello \n way";
  
   /* 输出字符串直到控制字符 \a */
   while( !iscntrl(str1[i]) && str1[i] != '\a') 
   {
      putchar(str1[i]);
      i++;
   }
  
   /* 输出字符串直到控制字符 \n */
   while( !iscntrl(str2[j]) ) 
   {
      putchar(str2[j]);
      j++;
   }
   
   return(0);
}

/*
	lbf
	2019/11/2
	iscntrl函数用于判断字符是否为控制字符，例如\t \r \n \b..
	如果是则返回1，否则返回0
*/