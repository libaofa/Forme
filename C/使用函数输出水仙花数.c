#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
	int m, n;

	scanf("%d %d", &m, &n);
	if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
	PrintN(m, n);
	if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

	return 0;
}

int narcissistic( int number )
{
	int i = 0;
	int sum = 0;
	int temp = 0;
	for(i = number; i != 0; i /= 10)
	{
		temp = i % 10;
		sum += temp*temp*temp;
	}
	if(sum == number)
		return 1;
	return 0;
}

void PrintN( int m, int n )
{
	int i = 0;
	for(i = m+1; i <= n; i++)
	{
		if(narcissistic(i))
			printf("%d\n",i);
	}
}
