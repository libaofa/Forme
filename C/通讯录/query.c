#include "lbf.h"

void query(PHONE *p1)
{
	int ch = 0;
	int zh = 0;
	char name_q[21];
	char relation_0[10];
	const char relation_1[10] = "亲__人";
	const char relation_2[10] = "朋__友";
	const char relation_3[10] = "陌生人";
	PHONE *p2 = p1->next;

	if(!p2)
	{
		printf("通讯录无成员, ");
		return;
	}
	getchar();
	printf("1.姓名\n");
	printf("2.关系\n");
	while(1)
	{
		printf("请键入选择:");
		ch = getchar();
		if(ch >= '1' && ch <= '2')
		{
			break;
		}
		getchar();
	}
	if(ch ==  '1')
	{
		getchar();
		printf("请输入姓名:");
		getaline(name_q, 20);
		printf("电话\t\t关系\t\t姓名\n");
		printf("___________________________________________\n");
		while(p2)
		{
			if(!strcmp(p2->data.name, (const char *)(name_q)))
			{
				printf("%s\t", p2->data.phone);
				printf("%s\t\t", p2->data.relation);
				printf("%s\n", p2->data.name);
				printf("___________________________________________\n");
			}
			p2 = p2->next;
		}	
	}
	else if(ch == '2')
	{
		getchar();
		printf("1.亲__人\n");
		printf("2.朋__友\n");
		printf("3.陌生人\n");	
		while(1)
		{
			printf("请选择关系:");
			zh = getchar();
			if(zh >= '1' && zh <= '3')
			{
				break;
			}
			getchar();
		}
		if(zh == '1')
		{
			strcpy(relation_0, relation_1);
		}
		else if(zh == '2')
		{
			strcpy(relation_0, relation_2);
		}
		else if(zh == '3')
		{
			strcpy(relation_0, relation_3);
		}
		printf("电话\t\t关系\t\t姓名\n");
		printf("___________________________________________\n");
		while(p2)
		{
			if(!strcmp(p2->data.relation, (const char *)(relation_0)))
			{
				printf("%s\t", p2->data.phone);
				printf("%s\t\t", p2->data.relation);
				printf("%s\n", p2->data.name);
				printf("___________________________________________\n");
			}
			p2 = p2->next;
		}	
	}
}
