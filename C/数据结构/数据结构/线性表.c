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

int  ssscanf();						//输入
void first(List *num);				//首页
List *tail_insert(List *num);		//尾部插入
List *head_insert(List *num);		//尾部插入
List *random_insert(List * num);	//随机插入
List *delete_one(List * num);		//删除
List *delete_all(List *num);		//清空
void display(List *num);			//遍历
List *flip(List *num);				//翻转

int main()	//程序入口
{
	List *num = (List *)malloc(sizeof(List));
	num->last = -1;
	first(num);	//进入首页
	return 0;
}

void first(List *num)
{
	int choose = 0;
	while(1)
	{ 
		printf("1.尾插数据\n");
		printf("2.头插数据\n");
		printf("3.随机插入\n");
		printf("4.遍历\n");
		printf("5.删除\n");
		printf("6.清空\n");
		printf("7.翻转\n");
		printf("8.删除\n");
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
		printf("表满,请执行删除或者清空操作\n");
	}
	else
	{
		printf("请输入想插入的数据:");
		i = ssscanf();
		//scanf_s("%d", &i);
		if (i > INT_MAX || i < INT_MIN)
		{
			printf("输入数值超量程\n");
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
		printf("表满,请执行删除或者清空操作\n");
	}
	else
	{
		printf("请输入想插入的数据:");
		i = ssscanf();
		//scanf_s("%d", &i);
		if (i > INT_MAX || i < INT_MIN)
		{
			printf("输入数值超量程请重新输入\n");
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
		printf("表满,请执行删除或者清空操作\n");
	}
	else
	{
		srand((unsigned)time(NULL));
		i = rand() % (num->last+2);
		printf("将会插入为第%d个成员\n", i);
		printf("请输入想插入的数据:");
		num1 = ssscanf();
		if (num1 > INT_MAX || num1 < INT_MIN)
		{
			printf("输入数值超量程请重新输入\n");
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
		printf("表空,请执行插入操作\n");
	}
	else
	{
		printf("请输入想删除的0~%d内的成员:", num->last);
		i = ssscanf();
		if (i<0 || i>num->last)
		{
			printf("数值不在范围内\n");
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
		printf("表空,请执行插入操作\n");
	}
	else
	{
		num->last = -1;
		printf("清空成功\n");
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
		printf("表空,请执行插入操作\n");
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
		printf("表空,请执行插入操作\n");
	}
	else
	{
		for (i = 0; i <= k; i++)
		{
			temp = num->data[i];
			num->data[i] = num->data[j - i];
			num->data[j - i] = temp;
		}
		printf("翻转成功\n");
	}
	system("pause");
	system("cls");
	return num;
}