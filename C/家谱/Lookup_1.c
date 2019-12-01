#include "lbf.h"

void Lookup_1(Genealogy *d)
{
	Genealogy *d1 = d->dad;
	Genealogy *d2 = d->dad->kid[0];
	printf("����Ҫ��ѯ�ĳ�Ա:\n");
	printf("[%d]-%d��%s-", d->data.num, d->data.line, (d->data.sex == 1)?"����":"Ů��");
	printf("(%s��%s):%s\n\n", d->dad->data.name, d->data.relation, d->data.name);
	if(d->data.wife == 0)
	{
		printf("����Ҫ��ѯ�ĳ�Ա�ĸ���:\n");
		printf("[%d]-%d��%s-", d1->data.num, d1->data.line, (d1->data.sex == 1)?"����":"Ů��");
		printf("(%s��%s):%s\n\n", d1->data.name, d1->data.relation, d1->data.name);
		printf("����Ҫ��ѯ�ĳ�Ա��ĸ��:\n");
		printf("[%d]-%d��%s-", d2->data.num, d2->data.line, (d2->data.sex == 1)?"����":"Ů��");
		printf("(%s��%s):%s\n\n", d2->data.name, d2->data.relation, d2->data.name);
		printf("����Ҫ��ѯ�ĳ�Ա������:\n");
		if(d1->kid[0] != NULL)
		{
			printf("[%d]-%d��%s-", d->kid[0]->data.num, d->kid[0]->data.line, (d->kid[0]->data.sex == 1)?"����":"Ů��");
			printf("(%s��%s):%s\n\n", d->dad->data.name, d->kid[0]->data.relation, d->kid[0]->data.name);
		}
		else
		{
			printf("�ó�Աû������\n\n");
		}
	}
	else
	{
		printf("����Ҫ��ѯ�ĳ�Ա���ɷ�:\n");
		printf("[%d]-%d��%s-", d1->data.num, d1->data.line, (d1->data.sex == 1)?"����":"Ů��");
		printf("(%s��%s):%s\n\n", d1->dad->data.name, d1->data.relation, d1->data.name);
	}
	printf("����Ҫ��ѯ�ĳ�Ա�ĺ���:\n");
	if(d->data.kid_num < 1)
	{
		printf("�ó�Աû�к���\n");
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
			printf("[%d]-%d��%s-", d3->data.num, d3->data.line, (d3->data.sex == 1)?"����":"Ů��");
			printf("(%s��%s):%s\n", d3->dad->data.name, d3->data.relation, d3->data.name);
			i++;
		}
	}
	printf("\n\n");
}