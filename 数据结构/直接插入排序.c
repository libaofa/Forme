#include <stdio.h>
#define MAXSIZE 10

void zjcr(int num[]);

int main()
{
	int num[MAXSIZE];
	int i = 0;
	for(i = 0; i < MAXSIZE; i++)
	{
		scanf("%d", &num[i]);
	}
	zjcr(num);
	for(i = 0; i < MAXSIZE; i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
	return 0;
}

void zjcr(int num[])
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for(i = 1; i < MAXSIZE; i++)
	{
		temp = num[i];
		for(j = i-1;j>=0 && num[j]>temp; j--)
		{
			num[j+1] = num[j];
		}
		num[j+1] = temp;
	}
}
