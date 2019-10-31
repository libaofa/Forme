#include "lbf.h"

void Lookup_1(Genealogy *d)
{
	Genealogy *d1 = d->dad;
	Genealogy *d2 = d->dad->kid[0];
	printf("您想要查询的成员:\n");
	printf("[%d]-%d代%s-", d->data.num, d->data.line, (d->data.sex == 1)?"男性":"女性");
	printf("(%s的%s):%s\n\n", d->dad->data.name, d->data.relation, d->data.name);
	if(d->data.wife == 0)
	{
		printf("您想要查询的成员的父亲:\n");
		printf("[%d]-%d代%s-", d1->data.num, d1->data.line, (d1->data.sex == 1)?"男性":"女性");
		printf("(%s的%s):%s\n\n", d1->data.name, d1->data.relation, d1->data.name);
		printf("您想要查询的成员的母亲:\n");
		printf("[%d]-%d代%s-", d2->data.num, d2->data.line, (d2->data.sex == 1)?"男性":"女性");
		printf("(%s的%s):%s\n\n", d2->data.name, d2->data.relation, d2->data.name);
		printf("您想要查询的成员的妻子:\n");
		if(d1->kid[0] != NULL)
		{
			printf("[%d]-%d代%s-", d->kid[0]->data.num, d->kid[0]->data.line, (d->kid[0]->data.sex == 1)?"男性":"女性");
			printf("(%s的%s):%s\n\n", d->dad->data.name, d->kid[0]->data.relation, d->kid[0]->data.name);
		}
		else
		{
			printf("该成员没有妻子\n\n");
		}
	}
	else
	{
		printf("您想要查询的成员的丈夫:\n");
		printf("[%d]-%d代%s-", d1->data.num, d1->data.line, (d1->data.sex == 1)?"男性":"女性");
		printf("(%s的%s):%s\n\n", d1->dad->data.name, d1->data.relation, d1->data.name);
	}
	printf("您想要查询的成员的孩子:\n");
	if(d->data.kid_num < 1)
	{
		printf("该成员没有孩子\n");
	}
	else if(d->data.wife == 0 || d->data.kid_num >= 1)
	{
		int i = 1;
		Genealogy *d3 = NULL;
		
		while(i <= d->data.kid_num)
		{
			if(d->data.wife != 1)
				d3 = d->kid[i];
			else
				d3 = d->dad->kid[i];
			printf("[%d]-%d代%s-", d3->data.num, d3->data.line, (d3->data.sex == 1)?"男性":"女性");
			printf("(%s的%s):%s\n", d3->dad->data.name, d3->data.relation, d3->data.name);
			i++;
		}
	}
	printf("\n\n");
}