#include "lbf.h"

Genealogy *Define_kid(Genealogy *d, int flag)
{
	char imformation[10] = "��Ա";
	const char imformation_0[10] = "����";
	const char imformation_1[10] = "����";
	const char imformation_2[10] = "�ɷ�";
	const char imformation_3[10] = "����";
	int Choice = 0;
	int Break = 1;
	int i = 0;
	int number = d->data.gen;
	Genealogy *d1 = (Genealogy *)malloc(sizeof(Genealogy));
	d1 = Init_kid(d1);
	number += 48;
	system("cls");
	/*---------------------����-------------------------*/
	if(d->data.num == 0)
	{
		strcpy(imformation, imformation_0);
	}
	/*-------------------���ӻ��ɷ�--------------------*/
	else if(flag == 0 && d->data.num != 0)
	{
		if(d->data.sex == 1)
		{
			strcat(imformation, imformation_1);
			d1->data.sex = 2;
			strcpy(d1->data.relation, imformation_1);
			d1->data.line = d->data.line;
			d1->data.flag = 0;
			d1->data.wife = 1;
		}
	}
	/*-----------------------����-----------------------*/
	else if(flag > 0 && d->data.num != 0)
	{
		strcat(imformation, imformation_3);
		number += 1;
	}
	printf("������%s����:",imformation);
	scanf("%10s", &d1->data.name);
	if(flag > 0 && d->data.num != 0)
	{
		printf("\n1.��\t2.Ů\n");
		printf("��ѡ��%s�Ա�:",imformation);
		while(Break)                         /*��ѭ��*/
		{
			Choice = _getch();               /*�޻���������һ���ַ�*/
			if(Choice >= 49 && Choice<= 50) /*���������ַ���ASCII����49��52֮��*/
			{
				Break = 0;           /*��flag����0*/
				Choice -= 48;        /*�õ����������*/
			}
		}
		if( Choice == 1)
		{
			printf("��\n");
			d1->data.sex = 1;
			d1->data.flag = 1;
		}
		else if(Choice == 2)
		{
			printf("Ů\n");
			d1->data.sex = 2;
			d1->data.flag = 0;
		}
		++d->data.kid_num;
		++d->kid[0]->data.kid_num;
		d1->data.wife = 0;
	}
	else if(d->data.num == 0)
	{
		d1->data.sex = 1;
		d1->data.flag = 1;
		d->data.flag = 0;
		d1->data.wife = 0;
	}
	if(flag != 0)
	{
		strcpy(d1->data.relation, imformation_3);
		d1->data.line = d->data.line+1;
	}
	d1->data.num = ++Count;
	d1->data.gen = d->data.gen+1;
	d1->data.dight = d->data.kid_num;
	d1->data.Exit = 1;
	putchar('\n');
	d1->dad = d;
	system("pause");

    return d1;
}