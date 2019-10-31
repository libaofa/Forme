#include <stdio.h>

void pyramid(int n);

int main()
{    
	int n;

	scanf("%d", &n);
	pyramid(n);

	return 0;
}

void pyramid(int n)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			putchar(' ');
		}
		for(j = 0; j <= i; j++)
		{
			printf("%c ",49+i);
		}
		putchar('\n');
	}
}
