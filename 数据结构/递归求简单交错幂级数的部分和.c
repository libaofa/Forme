#include <stdio.h>

double fn( double x, int n );

int main()
{
    	double x;
    	int n;

    	scanf("%lf %d", &x, &n);
    	printf("%.2f\n", fn(x,n));

    	return 0;
}

double fn( double x, int n )
{
	double Result = 0;
	int i = -1;
	int j = 0;
	int count = 1;
	double temp = 0;
	while(count<=n)
	{
		temp = 1;
		for(j = 0; j < count; j++)
			temp *= x;
		i *= -1;
		Result += i*temp;
		count++;
	}
	return Result;
}
