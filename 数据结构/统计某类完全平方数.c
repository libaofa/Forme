#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
	
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

int IsTheNumber ( const int N )
{
	int i = 1;
	int j = 0;
	int p[10];
	int num = N;
	while(i*i < num)
	{
		i++;
	}
	if(i*i == num)
	{
		i = 0;
		while(num != 0)
		{
			p[i++] = num%10;
			p[i] = '\0';
			num /= 10;
		}
		for(i = i-1; i >= 0; i--)
		{
			for(j = i-1; j >=0; j--)
			{
				if(p[j] == p[i])
					return 1;
			}
		}
	}
	return 0;
}
