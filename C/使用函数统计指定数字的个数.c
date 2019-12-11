#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit )
{
	int temp = 0;
	int i = 0;
	if(number < 0)
		number = -number;
	for(i = number; i != 0; i /= 10 )
	{
		if( i % 10 == digit)
			temp++;
	}
	return temp;
}
