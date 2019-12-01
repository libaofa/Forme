#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
    printf("C 语言中所有图形字符: \n");
    for (i=0;i<=127;++i)
    {
        if (isgraph(i)!=0)
            printf("%c ",i);
    }
    return 0;
}

/*
	该程序会显示出，所有可打印的字符
	isgraph函数中的变量如何使可打印的，返回一个非零值，否则返回零值。
*/