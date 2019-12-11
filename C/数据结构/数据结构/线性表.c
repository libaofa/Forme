#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>

enum MAX {n = 100};
typedef struct Xian
{
	int data[n];
	int last;
}List;

int  ssscanf();						//����
void first(List *num);				//��ҳ
List *tail_insert(List *num);		//β������
List *head_insert(List *num);		//β������
List *random_insert(List * num);	//�������
List *delete_one(List * num);		//ɾ��
List *delete_all(List *num);		//���
void display(List *num);			//����
List *flip(List *num);				//��ת

int main()	//�������
{
	List *num = (List *)malloc(sizeof(List));
	num->last = -1;
	first(num);	//������ҳ
	return 0;
}

void first(List *num)
{
	int choose = 0;
	while(1)
	{ 
		printf("1.β������\n");
		printf("2.ͷ������\n");
		printf("3.�������\n");
		printf("4.����\n");
		printf("5.ɾ��\n");
		printf("6.���\n");
		printf("7.��ת\n");
		printf("8.ɾ��\n");
		scanf_s("%d", &choose);
		switch (choose)
		{
			case 1:num = tail_insert(num); break;
			case 2:num = head_insert(num); break;
			case 3:num = random_insert(num); break;
			case 4:display(num); break;
			case 5:delete_one(num); break;
			case 6:delete_all(num); break;
			case 7:flip(num); break;
			case 8:free(num); exit(0);
			default:break;
		}
		//system("cls");
	}
}

int  ssscanf()
{
	char num[5];
	int ch = 0;
	int i = 0;
	int p = 1;
	ch = getchar();
	while (1)
	{
		ch = getchar();
		if(ch == ' ' || ch == '\t')
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
		ch += (num[--i]-48);
		while (i > 0)
		{
			ch += (num[--i] - 48) * p * 10;
			p *= 10;
		}
	}
	return ch;
}

List *tail_insert(List *num)
{
	int i = 0;
	system("cls");
	if (num->last == n)
	{
		printf("����,��ִ��ɾ��������ղ���\n");
	}
	else
	{
		printf("����������������:");
		i = ssscanf();
		//scanf_s("%d", &i);
		if (i > INT_MAX || i < INT_MIN)
		{
			printf("������ֵ������\n");
		}
		else
		{
			num->data[num->last + 1] = i;
			num->last++;
		}
	}
	system("pause");
	system("cls");
	return num;
}

List *head_insert(List *num)
{
	int i = 0;
	int j = num->last;
	system("cls");
	if (j == n)
	{
		printf("����,��ִ��ɾ��������ղ���\n");
	}
	else
	{
		printf("����������������:");
		i = ssscanf();
		//scanf_s("%d", &i);
		if (i > INT_MAX || i < INT_MIN)
		{
			printf("������ֵ����������������\n");
		}
		else
		{
			while (j >= 0)
			{
				num->data[j + 1] = num->data[j];
				j--;
			}
			num->data[0] = i;
			num->last++;
		}
	}
	system("pause");
	system("cls");
	return num;
}

List *random_insert(List * num)
{
	int i = 0;
	int j = 0;
	int num1 = 0;
	system("cls");
	if (num->last == n)
	{
		printf("����,��ִ��ɾ��������ղ���\n");
	}
	else
	{
		srand((unsigned)time(NULL));
		i = rand() % (num->last+2);
		printf("�������Ϊ��%d����Ա\n", i);
		printf("����������������:");
		num1 = ssscanf();
		if (num1 > INT_MAX || num1 < INT_MIN)
		{
			printf("������ֵ����������������\n");
		}
		else
		{
			if (i < num->last + 2)
			{
				for (j = num->last; j >= i; j--)
				{
					num->data[j + 1] = num->data[j];
				}
			}
			num->data[i] = num1;
			num->last++;
		}
	}
	system("pause");
	system("cls");
	return num;
}

List *delete_one(List * num)
{
	int i = 0;
	int j = num->last;
	system("cls");
	if (num->last == -1)
	{
		printf("���,��ִ�в������\n");
	}
	else
	{
		printf("��������ɾ����0~%d�ڵĳ�Ա:", num->last);
		i = ssscanf();
		if (i<0 || i>num->last)
		{
			printf("��ֵ���ڷ�Χ��\n");
		}
		else
		{
			while (i < j)
			{
				num->data[i] = num->data[i+1];
				i++;
			}
			num->last--;
		}
	}
	system("pause");
	system("cls");
	return num;
}

List *delete_all(List *num)
{
	system("cls");
	if (num->last == -1)
	{
		printf("���,��ִ�в������\n");
	}
	else
	{
		num->last = -1;
		printf("��ճɹ�\n");
	}
	system("pause");
	system("cls");
	return num;
}

void display(List *num)
{
	int i = 0;
	system("cls");
	if (num->last == -1)
	{
		printf("���,��ִ�в������\n");
	}
	else
	{
		while (i <= num->last)
		{
			printf("%d	%d\n", i, num->data[i]);
			i++;
		}
	}
	system("pause");
	system("cls");
}

List *flip(List *num)
{
	int i = 0;
	int j = num->last;
	int k = j / 2;
	int temp = 0;
	system("cls");
	if (num->last == -1)
	{
		printf("���,��ִ�в������\n");
	}
	else
	{
		for (i = 0; i <= k; i++)
		{
			temp = num->data[i];
			num->data[i] = num->data[j - i];
			num->data[j - i] = temp;
		}
		printf("��ת�ɹ�\n");
	}
	system("pause");
	system("cls");
	return num;
}