#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"
#include "lbf.h"
#include <string.h>

sqlite3 *database(sqlite3 *db)
{
	char db_name[MAX_LINE+1];
	char open_name[MAX_LINE + 7] = "db\\";
	while (1)
	{
		printf("请输入您想要连接的数据库名:");
		fflush(stdout);
		getaline(db_name, MAX_LINE,0);
		if (db_name[0] != '\0')
			break;
		printf("名称错误请重新输入\n");
		system("cls");
	}
	strcat(open_name, db_name);
	strcat(open_name, ".db\0");
	char S_open = sqlite3_open(open_name, &db);
	if (S_open)
	{
		fprintf(stderr, "不能打开数据库:%s\n", sqlite3_errmsg(db));
	}
	else
	{
		fprintf(stdout, "打开%s成功\n", open_name);
	}

	return db;
}