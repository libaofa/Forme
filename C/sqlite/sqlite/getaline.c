#include <stdio.h>
#include "lbf.h"

void getaline(char data[], int size, int flag)
{
	int ch = 0;
	int i = 0;
	rewind(stdin);
	while (1)
	{
		ch = getchar();
		if (flag == 0 && ch == '\n')
		{
			break;
		}
		else if (flag == 1 && ch == ';')
		{
			break;
		}
		else if (flag == 1 && ch == '\n')
		{
			data[i++] = ' ';
		}
		else if (ch == ' ' || ch == '\t')
		{
			if (i == 0)
				continue;
			else if (i != 0 && flag == 0)
				break;
			else
				data[i++] = ch;
		}
		else
		{
			if (i < size)
				data[i++] = ch;
		}
	}
	data[i] = '\0';
}