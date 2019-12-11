#include "lbf.h"

PHONE *backspace(PHONE *p1)
{
	int ch = 0;
	int i = 0;
	int j = 0;
	PHONE *p2 = p1;
	PHONE *p3 = p1->next;
	if(p3)
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
			printf("%d", i);
			while(p2->next)
			{
				if(++j == ch)
				{
					break;
				}
				p3 = p3->next;
				p2 = p2->next;
			}
			p2->next = p3->next;
			free(p3);
			printf("删除成功, ");
		}
	}
	else
	{
		printf("通讯录内不存在成员\n");
	}
	
	return p1;
}
