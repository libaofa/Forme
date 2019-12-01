#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p )
{
	
	if(p >= 2)
	{
		int i = 0;
		for(i = 2; i*i <= p; i++)
		{	
			if(p % i == 0)
				break;
		}
		if(i*i > p)
			return 1;
	}	
	return 0;
}

int PrimeSum( int m, int n )
{
	int i = 0;
	int sum = 0;
	for(i = m; i < n; i++)
	{
		if(prime( i ))
		{
			sum += i;
		}
	}
	return sum;
}
