#include "lbf.h"

void Lookup(Genealogy *d)
{
	system("cls");
	if(d == NULL)
	{
		printf("\n家谱不存在,请创建\n\n");
		system("pause");
	}
	else
	{
		int Choice = 0;
		printf("请输入想要查寻成员的编号:");
		if( scanf("%d", &Choice) == 1)	//如果输入格式正确的是
		{
			if(Choice > Count || Choice < 1)
			{
				printf("\n\n该成员不存在,");
				printf("请输入1~%d之间的数值\n\n",Count);
				system("pause");
			}
			else
			{
				Display(d, Choice);
			}
		}
		else
		{
			fflush(stdin);		//清空缓冲区
			Choice = 0;			//初始化
			printf("\n\n输入错误,返回首页\n\n");
			system("pause");
		}
	}
}