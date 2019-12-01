#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
	double e, x;

	scanf("%lf %lf", &e, &x);
	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

	return 0;
}

double funcos( double e, double x )
{
	int i = 0;
	int j = 0;
	int k = -1;
	double pow1 = 1;
	double dec1 = 1;
	double temp = 1;
	double sum = 1;
	for(i = 2; temp > e; i += 2)
	{
		pow1 = pow1*x*x;
		dec1 = dec1*i*(i-1);
		temp = pow1/dec1;
		sum += k*temp;
		k *= -1;
	}
	return sum;
}
