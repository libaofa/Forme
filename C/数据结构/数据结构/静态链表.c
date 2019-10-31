#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

typedef struct Jtlb
{
	int num;
	int cur;
}Jt;

void init(Jt data[]);
void first(Jt data[]);
int  ssscanf();
void insert(Jt data[]);
void delete_one(Jt data[]);
int  malloc_Jt(Jt data[]);
int  length_Jt(Jt data[]);
void display(Jt data[]);

int main()
{
	Jt data[MAXSIZE];
	init(data);
	first(data);
	return 0;
}

void init(Jt data[])
{
	int i = 0;
	for (i = 0; i < MAXSIZE - 1; i++)
	{
		data[i].cur = i + 1;
	}
	data[MAXSIZE - 1].cur = 0;
}

void first(Jt data[])
{
	int choose = 0;
	while(1)
	{
		printf("1.插入\n");
		printf("2.删除\n");
		printf("3.遍历\n");
		printf("4.清空\n");
		printf("5.退出\n");
		/*for (int i = 0; i < 10; i++)
		{
			printf("%d\t", data[i].cur);
		}
		printf("%d\n",data[MAXSIZE-1].cur);*/
		choose = ssscanf();
		system("cls");
		switch (choose)
		{
		case 1: insert(data); break;
		case 2: delete_one(data); break;
		case 3: display(data); break;
		case 4: init(data); break;
		case 5: exit(-1); break;
		default: break;
		}
		system("pause");
		system("cls");
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

int  malloc_Jt(Jt data[])
{
	int i = data[0].cur;
	if (data[0].cur)
		data[0].cur = data[i].cur;
	return i;
}

int  length_Jt(Jt data[])
{
	int i = 0;
	int j = data[MAXSIZE - 1].cur;
	while (j)
	{
		j = data[j].cur;
		i++;
	}
	return i;
}

void insert(Jt data[])
{
	int length = length_Jt(data)+1;
	if (length == MAXSIZE-1)
	{
		printf("静态链表满\n");
	}
	else
	{
		int choose = 0;
		printf("请输入1~%d范围内的数字进行插入,超出即尾插:", length);
		choose = ssscanf();
		if (choose > 0)
		{
			int num1 = 0;
			int i = 1;
			int k = MAXSIZE - 1;
			int j = malloc_Jt(data);
			printf("输入想要输入的数值:");
			num1 = ssscanf();
			if (num1 >= -32768 && num1 <= 32768)
			{
				if (choose > length)
				{
					choose = j;
				}
				for (i = 1; i < choose; i++)
				{
					k = data[k].cur;
				}
				data[j].cur = data[k].cur;
				data[j].num = num1;
				data[k].cur = j;
			}
			else
			{
				printf("超范围");
			}
		}
		else
		{
			printf("超范围");
		}
	}
}

void delete_one(Jt data[])
{
	int length = length_Jt(data) + 1;
	if (length == 1)
	{
		printf("静态链表空\n");
	}
	else
	{
		int choose = 0;
		printf("请输入1~%d范围内的数字进行插入,超出即删尾部:", length);
		choose = ssscanf();
		if (choose > 0)
		{
			int i = 1;
			int j = 0;
			int k = MAXSIZE - 1;
			if (choose > length)
			{
				choose = length;
			}
			for (i = 1; i < choose; i++)
			{
				k = data[k].cur;
			}
			j = data[k].cur;
			data[k].cur = data[j].cur;
			data[j].cur = data[0].cur;
			data[0].cur = j;
			printf("删除成功\n");
		}
		else
		{
			printf("超范围\n");
		}
	}
}

void display(Jt data[])
{
	int i = data[MAXSIZE - 1].cur;
	while (i)
	{
		printf("%d----------%d\n", data[i].num, data[i].cur);
		i = data[i].cur;
	}
}