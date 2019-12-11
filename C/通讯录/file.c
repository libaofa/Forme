#include "lbf.h"

void file_write(PHONE *p1)
{
	FILE *fp = NULL;
	PHONE *p2 = p1->next;

	fp = fopen("phone.txt", "w");
	
	while(p2)
	{
		fprintf(fp, "%s\t%s\t%s\n", p2->data.phone, p2->data.relation, p2->data.name);
		p2 = p2->next;
	}

	fclose(fp);
}

PHONE *file_read()
{
	FILE *fp = NULL;
	PHONE *p1 = (PHONE *)malloc(sizeof(PHONE));
	PHONE *p2 = NULL;
	PHONE *p3 = NULL;

	p1->next = NULL;
	p2 = p1;
	
	fp = fopen("phone.txt", "r");
	if(fp)
	{	
		while(!feof(fp))
		{	
			p3 = (PHONE *)malloc(sizeof(PHONE));
			p3->next = NULL;
			fscanf(fp, "%s\t%s\t%s\n", p3->data.phone, p3->data.relation, p3->data.name);
			p2->next = p3;
			p2 = p2->next;
		}	
	}
	else
	{
		fp = fopen("phone.txt", "w");
	}
	fclose(fp);

	return p1;
}
