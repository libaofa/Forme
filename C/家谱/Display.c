#include "lbf.h"

void Display(Genealogy *d, int flag_1)
{
	system("cls");
	if(d == NULL)
	{
		printf("\n家谱不存在,请创建\n\n");
	}
	else
	{
		int depth = 0;			/*深度*/
        int lelve = 1;			/*总数*/
        int rear = 1;			/*尾下标*/
        int front = 0;			/*下标进位*/
		int i = 0;
		int j = 1;
		Genealogy *d1 = NULL;	
		Genealogy *s[MAX_1];
        s[rear] = d;
        while(front < rear)
        {
            d1 = s[++front];
			while(i < MAX)
			{
				if(d1->kid[i] != NULL)
					s[++rear] = d1->kid[i];
				i++;
			}
            if(front == lelve)
            {
                lelve = rear;
                depth++;
            }
			i = 0;
        }
		depth++;
		//printf("家谱层次为%d, 家谱的节成员数为%d\n", depth++, lelve);
		if(flag_1 == 0)
		{
			printf("遍历成员信息");
			for(i = 1; i <= depth; i++)
			{
				while(j <= lelve)
				{
					if(s[j]->data.gen != i)
					{	
						printf("[%d]-%d代%s-", s[j]->data.num, s[j]->data.line, (s[j]->data.sex == 1)?"男性":"女性");
						printf("(%s的%s):%s        ", s[j]->dad->data.name, s[j]->data.relation, s[j]->data.name);
					}
					else
					{
						break;
					}
					j++;
				}
				printf("\n\n-----------------------------------------------------\n\n");
			}
		}
		else
		{
			while(j <= lelve)
			{
				if(s[j]->data.num == flag_1)
				{	
					Lookup_1(s[j]);
				}
				j++;
			}
		}
	}
	system("pause");
}