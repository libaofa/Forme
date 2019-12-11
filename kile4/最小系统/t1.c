#include <reg51.h>

void yanshi()
{
	int i = 0;
	int j = 0;
	while(i < 10)
	{
		while(j < 1000)
		{
	 		j++;
		}
		j = 0;
		i++;
	}
}

void main()
{
	while(1)
	{
	 	P2 = 0xfe;
		yanshi();
		P2 = 0xfd;
		yanshi();
		P2 = 0xfb;
		yanshi();
		P2 = 0xf7;
		yanshi();
		P2 = 0xef;
		yanshi();
		P2 = 0xde;
		yanshi();
		P2 = 0xbf;
		yanshi();
		P2 = 0x7f;
		yanshi();
	}
}