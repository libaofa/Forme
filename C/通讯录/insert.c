#include "lbf.h"

PHONE *insert(PHONE *p1, int m, int count)
{
	int ch = 0;
	int i = 0;
	int j = 0;
	int flag = 1;
	static char relation_i;
	const char relation_1[9] = "亲__人";
	const char relation_2[9] = "朋__友";
	const char relation_3[9] = "陌生人";
	PHONE *p2 = p1;
	PHONE *p3 = (PHONE *)malloc(sizeof(PHONE));	
	getchar();
	printf("请输入姓名:");
	getaline(p3->data.name,20);
	while(flag)
	{
		printf("请输入电话号:");
		getaline(p3->data.phone,11);
		if(strlen(p3->data.phone) != 11)
		{
			printf("电话号须为11位数字\n");
		}
		else
		{
			if(p3->data.phone[0] != '0' && p3->data.phone[0] != '1')
			{
				printf("首位必须是1或者0\n");
			}
			else
			{
				for(i = 0; i < 11; i++)
				{
					if(p3->data.phone[i] < '0' || p3->data.phone[i] > '9')		
					{
						flag = 1;
						printf("电话号必须为纯数字\n");
						break;
					}	
					else 
					{
						flag = 0;
					}
				}
			}
		}
	}

	printf("1.亲__人\n");
	printf("2.朋__友\n");
	printf("3.陌生人\n");
	while(1)
	{
		printf("请选择关系:");
		relation_i = getchar();
		if(relation_i >= '1' && relation_i <= '3')
		{
			break;
		}
	}
	if(relation_i == '1')
	{
		strcpy(p3->data.relation, relation_1);
	}
	else if(relation_i == '2')
	{
		strcpy(p3->data.relation, relation_2);
	}
	else if(relation_i == '3')
	{
		strcpy(p3->data.relation, relation_3);
	}		
	if(m == 0)
	{
		while(p2->next)
		{
			p2 = p2->next;
		}
		p2->next = p3;
		p3->next = NULL;
		printf("\n添加成功, ");
	}
	else
	{
		while(p2)
		{
			if(j++ == count)
			{
				break;
			}
			p2 = p2->next;
		}
		strcpy(p2->data.name, p3->data.name);
		strcpy(p2->data.phone, p3->data.phone);
		strcpy(p2->data.relation, p3->data.relation);
		free(p3);
		printf("\n修改成功, ");
	}
	return p1;
}
