#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int number )
{
	int i = 1;
	int temp = 0;
	int sum = 0;
	if(number<0)
	{
		number = -number;
		i = -1;
	}
	while(number)
	{
		temp = number%10;
		sum = sum*10+temp;
		number /= 10;
	}
	sum *= i;
	
	return sum;
}
