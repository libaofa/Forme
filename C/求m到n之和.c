#include <stdio.h>

int sum( int m, int n )
{
	int sum1 = 0;
	for(; m <= n; m++)
	{
		sum1 += m;
	}

	return sum1;
}

int main()
{    
    	int m, n;
	printf("Please enter m and n:");
    	scanf("%d %d", &m, &n);
	if(m < n)
    		printf("sum = %d\n", sum(m, n));
	else
		printf("Error\n");

    	return 0;
}
