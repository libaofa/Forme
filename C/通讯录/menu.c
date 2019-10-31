#include "lbf.h"

PHONE *menu()
{
	int ch = 0;
	int i = 0;
	PHONE *p1 = NULL;
	p1 = file_read();
	while(1)
	{
		system("clear");
		printf("1.添加\n");
		printf("2.查询\n");
		printf("3.遍历\n");
		printf("4.删除\n");
		printf("5.修改\n");
		printf("6.退出\n");

		printf("\n请键入您的选择:");
		ch = getchar();
		system("clear");
		switch(ch)
		{
			case '1':
				p1 = insert(p1, 0, 0);	
				break;
			case '2':
				query(p1);
				break;
			case '3':
				i = display(p1);
				break;
			case '4':
				p1 = backspace(p1);
				break;
			case '5':
				p1 = modify(p1);
				break;
			case '6':
				return p1;
			default:
				printf("请输入1～5的数字\n");
				break;
		}
		file_write(p1);
		printf("按任意按键继续\n");
		getchar();
		getchar();
	}
}
