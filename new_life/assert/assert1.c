#include <stdio.h>
#include <assert.h>

int main()
{
	int a = 10, b = 5;
	
	printf("a=10,b=5\n");
	
	assert(a > b);
	
	printf("a > b\n");
	
	assert(a < b);
	
	printf("a < b\n");
	
	return 0;
}

/*
	lbf
	2019.10.31 20:38
	**********断言***********
	当assert内的条件为真时，则继续执行，且无任何返回值，
	否则返回 main: Assertion `a < b' failed，说明条件错误
	
	这实际上是一个宏，不是一个函数，可用于在 C 程序中添加诊断
	#define assert(ignore) ((void)0)
	2019
*/
