#include "lbf.h"

void Display(Genealogy *d, int flag_1)
{
	system("cls");
	if(d == NULL)
	{
		printf("\n���ײ�����,�봴��\n\n");
	}
	else
	{
		int depth = 0;			/*���*/
        int lelve = 1;			/*����*/
        int rear = 1;			/*β�±�*/
        int front = 0;			/*�±��λ*/
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
		//printf("���ײ��Ϊ%d, ���׵Ľڳ�Ա��Ϊ%d\n", depth++, lelve);
		if(flag_1 == 0)
		{
			printf("������Ա��Ϣ");
			for(i = 1; i <= depth; i++)
			{
				while(j <= lelve)
				{
					if(s[j]->data.gen != i)
					{	
						printf("[%d]-%d��%s-", s[j]->data.num, s[j]->data.line, (s[j]->data.sex == 1)?"����":"Ů��");
						printf("(%s��%s):%s        ", s[j]->dad->data.name, s[j]->data.relation, s[j]->data.name);
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