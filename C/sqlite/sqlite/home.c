#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"
#include "lbf.h"

void home(sqlite3 *db)
{
	int choose = 0;
	while (1)
	{
		printf("1.�������ݿ�\n");
		printf("2.������\n");
		printf("3.�����\n");
		printf("4.�˳�\n");
		printf("���������ѡ��:");
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