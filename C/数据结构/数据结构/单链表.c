#include <stdlib.h>
#include <stdio.h>

typedef struct lbf
{
	int num;
	struct lbf*next;
}Lbf;

int count = 0;
void first(Lbf *data);
int  ssscanf();						//����
Lbf *insert(Lbf *data);
Lbf *delete_one(Lbf *data);
Lbf *delete_all(Lbf *data);
Lbf *flid(Lbf *data);
void display(Lbf * data);

int main()
{
	Lbf *data = (Lbf *)malloc(sizeof(Lbf));
	data->next = NULL;
	first(data);

	return 0;
}

void first(Lbf *data)
{
	int choose = 0;
	while (1)
	{
		system("cls");
		printf("1.����\n");
		printf("2.ɾ��\n");
		printf("3.����\n");
		printf("4.���\n");
		printf("5.��ת\n");
		printf("6.�˳�\n");
		printf("���������ѡ��");
		choose = ssscanf();
		system("cls");
		switch (choose)
		{
			;
		case 1:data = insert(data); break;
		case 2:data = delete_one(data); break;
		case 3:display(data); break;
		case 4:data = delete_all(data); break;
		case 5:data = flid(data); break;
		case 6:data = delete_all(data); free(data); exit(0);
		default: break;
		}
		system("pause");
	}
}

int  ssscanf()
{
	char num[5];
	int ch = 0;
	int i = 0;
	int p = 1;
	while (ch = getchar())
	{
		if (ch == ' ' || ch == '\t')
			ch = getchar();
		if (ch < 48 || ch>57 || ch == '\n')
		{
			num[i] = '\0';
			break;
		}
		num[i] = ch;
		i++;
	}
	ch = 0;
	if (i != 0)
	{
		ch += (num[--i] - 48);
		while (i > 0)
		{
			ch += (num[--i] - 48) * p * 10;
			p *= 10;
		}
	}
	return ch;
}

Lbf *insert(Lbf *data)
{
	int count1 = 0;
	printf("��������Ҫ�����1~%d��Χ�ڵ����֣���������Ϊβ��:\n", count + 1);
	count1 = ssscanf();
	if (count1>=1)
	{
		int i = 1;
		int count2 = 0;
		Lbf *d1 = data;
		Lbf *d2 = d1->next;
		printf("��������Ҫ�������ֵ:");
		count2 = ssscanf();
		if (count2>32727 ||count2<-32768)
		{
			printf("������\n");
		}
		else
		{
			Lbf *dd = (Lbf *)malloc(sizeof(Lbf));
			if (count1 < count)
			{
				while (i < count1)
				{
					d1 = d1->next;
					d2 = d2->next;
					i++;
				}
				d1->next = dd;
				dd->next = d2;
				dd->num = count2;
			}
			else
			{
				while (d1->next)
				{
					d1 = d1->next;
				}
				d1->next = dd;
				dd->num = count2;
				dd->next = NULL;
			}
			count++;
		}
	}
	else
	{
		printf("������\n");
	}
	return data;
}

Lbf *delete_one(Lbf *data)
{
	if (data->next == NULL)
	{
		printf("���,��ִ�в������\n");
	}
	else
	{
		int count1 = 0;
		printf("��������Ҫɾ����1~%d��Χ�ڵ����֣���������Ϊɾ��β���:\n", count);
		count1 = ssscanf();
		if (count1 > 0)
		{
			int i = 1;
			Lbf *d1 = data;
			Lbf *d2 = NULL;
			if (count1 >= count)
			{
				count1 = count;
			}
			while (i < count1)
			{
				d1 = d1->next;
				i++;
			}
			d2 = d1->next;
			if (d1->next)
			{
				d1->next = d2->next;
			}
			else
			{
				d1->next = NULL;
			}
			free(d2);
			count--;
			printf("ɾ���ɹ�\n");
		}
		else
		{
			printf("������\n");
		}
	}
	return data;
}

Lbf *delete_all(Lbf *data)
{
	if (data->next == NULL)
	{
		printf("���,��ִ�в������\n");
	}
	else
	{
		Lbf *d1 = data;
		Lbf *d2 = NULL;
		while (d1->next)
		{
			d2 = d1->next;
			d1->next = d2->next;
			free(d2);
		}
		printf("��ճɹ�\n");
	}
	return data;
}

void display(Lbf * data)
{
	Lbf *d1 = data->next;
	int i = 0;
	while (d1)
	{
		printf("%d----------%d\n", i++, d1->num);
		d1 = d1->next;
	}
}

Lbf *flid(Lbf *data)
{
	if (data->next == NULL)
	{
		printf("���,��ִ�в������\n");
	}
	else
	{
		Lbf *frond = data->next;
		Lbf *center = NULL;
		Lbf *back = NULL;
		while (frond)
		{
			center = frond;
			frond = frond->next;
			center->next = back;
			back = center;
		}
		data->next = back;
	}
	return data;
}