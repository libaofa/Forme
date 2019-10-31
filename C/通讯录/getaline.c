#include "lbf.h"

void getaline(char data[], int size)
{
	int ch = 0;
	int i = 0;
	rewind(stdin);
	while (1)
	{
		ch = getchar();
		if (ch == '\n')
		{
			break;
		}
		else if(ch == ' ' || ch == '\t')
		{
			continue;
		}
		else
		{
			if (i < size)
				data[i++] = ch;
		}
	}
	data[i] = '\0';
}
