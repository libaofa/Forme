#include <stdio.h>
#include <string.h>
#include <math.h>
#include "lbf.h"


int getanumber()
{
	int data = 0;
	char str[MAX_NUMBER +1];
	int i = 0;
	int ten_pow = 0;
	getaline(str, MAX_NUMBER,0);
	if (str[0] != '\0')
	{
		i = strlen(str);
		data = 0;
		while (i > 0)
		{
			data += (int)pow(10, ten_pow++)*(str[--i] - 48);
			//printf("Êý×Ö:%d\n", data);
		}
	}

	return data;
}