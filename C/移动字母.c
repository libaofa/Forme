#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
	char s[MAXS];

	GetString(s);
	Shift(s);
	printf("%s\n", s);
	
	return 0; 
}

void GetString( char s[] )
{
	int ch = 0;
	int i = 0;
	while(1)
	{
		i = 0;
		while((ch = getchar()) != '\n')
		{
			s[i++] = ch;
			s[i] = '\0';
		}
		if(i > 3 && ch == '\n')
			break;
	}
}

void Shift( char s[] )
{
	int i = 0;
	int j = strlen(s)-1;
	char temp = 0;
	for(i = 0; i <= j/2; i++)
	{
		temp = s[i];
		s[i] = s[j-i];
		s[j-i] = temp;
	}
}
