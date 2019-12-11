#include <stdio.h>

void PrintN ( int N );

int main ()
{
    int N;

    scanf("%d", &N);
    PrintN( N );

    return 0;
}

void PrintN ( int N )
{
	int i = 0;
	while(i != N)
	{
		printf("%d\n", ++i);
	}
}
