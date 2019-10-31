#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
	
    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}

double f( int n, double a[], double x )
{
	int i = 0;
	int j = 0;
	double temp = 0;
	double pow = 1;
	for(i = 0; i <= n; i++)
	{
		if(a[i] == 0)
			pow = 0;
		else if(i == 0)
			pow = 1;
		else
		{
			for(j = 1; j <= i; j++)
				pow *= x;
		}
		temp += a[i]*pow;
		pow = 1;
	}
	return temp;
}
