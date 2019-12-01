#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib( int n )
{
	int i = 0;
	int temp = 0;
	int fib[2] = {1, 1};
	if(n < 2)
		return fib[n];
	for(i = 2; i < n; i++)
	{
		temp = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = temp;
	}
	return fib[1];
}

void PrintFN( int m, int n )
{
	int i = 1;
	int temp = 0;
	temp = fib(i);
	for(i = 1; temp <= n;temp = fib(++i))
	{
		if(temp >= m)
			printf("%d ", temp);
		continue;
	}
	putchar('\n');
}
