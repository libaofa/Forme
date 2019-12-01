#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}

int fn( int a, int n )
{
	int i = 0;
	int temp = 0;
	int p = 1;
	for(i = 0; i < n-1; i++)
	{
		temp += a*p*10;
		p *= 10;
	}
	if(n != 0)
		temp += a;
	
	return temp;
}

int SumA( int a, int n )
{
	int temp = 0;
	int i = 0;
	for(i = n; i > 0; i--)
	{
		temp += fn(a, i);
	}
	return temp;
}
