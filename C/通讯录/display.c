#include "lbf.h"

int display(PHONE *p1)
{
	int i = 0;
	PHONE *p2 = p1->next;
	if(p2)
	{	
		printf("编号\t\t电话\t\t关系\t\t姓名\n");
		printf("____________________________________________________\n");	
		while(p2)
		{
			printf("%d\t\t", ++i);
			printf("%s\t", p2->data.phone);
			printf("%s\t\t", p2->data.relation);
			printf("%s\n", p2->data.name);
			printf("____________________________________________________\n");
			p2 = p2->next;
		}
	}
	else
	{
		printf("通讯录内不存在成员, ");
	}

	return i;
}
