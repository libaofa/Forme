#include "lbf.h"

PHONE *modify(PHONE *p1)
{
	int ch = 0;
	int i = 0;
	int j = 0;
	PHONE *p2 = p1->next;
	if(p2)
	{	
		i = display(p1);
		printf("请输入编号:");
		while(1)
		{
			if(scanf("%d", &ch) == 1)
			{
				break;
			}
			else
			{
				fflush(stdin);
				ch = 0;
			}
		}
		if(ch > i)
		{
			printf("超出范围, ");
		}
		else
		{
			p1 = insert(p1, 1, ch);
		}
	}
	else
	{
		printf("通讯录内不存在成员, ");
	}
	
	return p1;
}
