#include "lbf.h"

Genealogy *Infile(Genealogy *d)
{
	FILE *fp;
	int i = 0;
	int j = 0;
	int k = 0;
	int front = 0;
	int flag = 0;
	Genealogy *d1 = d;
	Genealogy *d2[300];
	//d1 = NULL;
	
	fp = fopen("¼ÒÆ×.txt", "r");

	if(fp == NULL)
	{	
		return NULL;
	}
	else
	{
		while(!feof(fp))
		{
			Genealogy *d3 = (Genealogy *)malloc(sizeof(Genealogy));
			d3 = Init_kid(d3);
			fscanf(fp, "%s%s", &d3->data.name, &d3->data.relation);
			fscanf(fp, "%d%d%d", &d3->data.sex, &d3->data.gen, &d3->data.line);
			fscanf(fp, "%d%d%d", &d3->data.num, &d3->data.flag, &d3->data.kid_num);
			fscanf(fp, "%d%d%d", &d3->data.wife, &d3->data.dight, &d3->data.Exit);
			if(feof(fp))
			{
				free(d3);
				--i;
				break;
			}
			d2[i++] = d3;	
		}
		if(front <= i)
		{
			d2[0]->dad = d1;
			d1->kid[1] = d2[0];
			d1 = d2[0];
			j++;
			front++;
			Count++;
		}
		while(front <= i)
		{
			if(d2[front]->data.flag == 0 || d2[front]->data.flag == 1)
			{
				k = d2[front]->data.dight;
				d1->kid[k] = d2[front];
				d2[front]->dad = d1;
				Count++;
				if(d1->kid[k]->data.Exit == 1)
				{
					
					if(front+1 <= i)
					{
						if(d1->dad->kid[++j] != NULL && d2[front+1]->data.gen == d2[front]->data.gen)
						{
							d1 = d1->dad->kid[j];
						}
						if(d2[front+1]->data.gen != d2[front]->data.gen)
						{
							j = 0;
							d1 = d1->kid[1];
						}
					}
				}
			}
			front++;
		}
	}
	fclose(fp);

	return d->kid[1];
}