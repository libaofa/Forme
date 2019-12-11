#include <stdio.h>

#define MAXN 10

int even( int n );
int OddSum( int List[], int N );

int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    
    for ( i=0; i<N; i++ ) {
       scanf("%d", &List[i]);
    }
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
       if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}
int even( int n )
{
	if(n%2 == 0)
		return 1;
	return 0;
}

int OddSum( int List[], int N )
{
	int sum = 0;
	int i = 0;
	for(i = 0; i < N; i++)
	{
		if(even(List[i]) == 0)
			sum += List[i];
	}

	return sum;
}

