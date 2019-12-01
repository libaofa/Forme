#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
	int i, m, n;

	scanf("%d %d", &m, &n);
	if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
	if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
	PrintPN(m, n);

	return 0;
}

int factorsum( int number )
{
	int i = 0;
	int temp = 0;
	for(i = 1; temp < number; i++)
	{
		if(number % i == 0)
		{	
			temp += i;
		}
	}	
	if(temp == number)
		return number;
	return 0;
}

void PrintPN( int m, int n )
{
	int p[100];
	int i = 0;
	int j = 0;
	int k = 1;
	for(i = m; i <= n; i++)
	{
		p[0] = 0;
		for(j = 1; p[0] < i; j++)
		{
			if(i % j == 0)
			{
				p[0] += j;
				p[k++] = j;
				p[k] = '\0';
			}
		}
		if(p[0] == i)
		{
			printf("%d = %d ", p[0], p[1]);
			for(j = 2; p[j] != '\0'; j++)
			{
				printf("+ %d ", p[j]);
			}
			putchar('\n');
		}
		k = 1;
	}
}

