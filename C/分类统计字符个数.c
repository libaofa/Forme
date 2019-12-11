#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void ReadString( char s[] )
{
	int ch = 0;
	int i = 0;
	while((ch = getchar()) != '#' && i <= MAXS)
	{
		s[i] = ch;
		i++;
		s[i] = '\0';
	}
}

void StringCount( char s[] )
{
	int letter = 0;
	int blank = 0;
	int digit = 0;
	int other = 0;
	int i = 0;
	for(i = 0; i < MAXS && s[i] != '\0'; i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
			letter++;
		else if(s[i] == ' ' || s[i] == '\n')
			blank++;
		else if(s[i]>='0'&&s[i]<='9')
			digit++;
		else
			other++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d\n",
 letter, blank, digit, other);
}
