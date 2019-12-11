#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"
#include "lbf.h"

void home(sqlite3 *db)
{
	int choose = 0;
	while (1)
	{
		printf("1.连接数据库\n");
		printf("2.创建表\n");
		printf("3.表操作\n");
		printf("4.退出\n");
		printf("请键入您的选择:");
		choose = getanumber();
		printf("%d\n", choose);
		system("cls");
		if (choose > 0)
		{
			switch (choose)
			{
			case 1: db = database(db); break;
			case 2: create_table(db); break;
			case 3: table_operation(db); break;
			case 4: sqlite3_close(db); exit(1); break;
			default:break;
			}
		}
		system("pause");
		system("cls");
	}
}