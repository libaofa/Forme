#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

int prime( int p )
{
	int i = 0;
	if(p != 2)
	{
		for(i = 2; i*i < p; i++)
		{
			if(!(p % i))
				break;
		}
		if(p % i)
			return 1;
		return 0;
	}
	return 1;
}

void Goldbach( int n )
{
	int i = 0;
	int max = (n-1)/2+1;
	for(i = 3; i <= max; i++)
	{
		if(prime(i))
		{
			if(prime(n-i))
			{
				printf("%d = %d + %d", n, i, n-i);
				break;
			}
		}
	}
}
