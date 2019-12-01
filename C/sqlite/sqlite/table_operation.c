#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sqlite3.h"
#include "lbf.h"

void table_operation(sqlite3 *db)
{
	if (db == NULL)
	{
		fprintf(stderr, "未连接数据库\n");
	}
	else
	{
		char operation[MAX_STR+1];
		char rc = 0;
		char *zErrMsg = NULL;
		int column = 0;
		printf("请输入想要执行的表操作:\n");
		getaline(operation, MAX_STR, 1);
		strcat(operation, ";");
		//printf("%s\n", operation);
		rc = sqlite3_exec(db, operation, callback_1, 0, &zErrMsg);
		if (rc != SQLITE_OK)
		{
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else
		{
			switch (operation[0])
			{
			case 'i':
			case 'I':printf("增加成功\n"); break;
			case 'd':
			case 'D':printf("删除成功\n"); break;
			case 'u':
			case 'U':printf("更新成功\n"); break;
			case 's':
			case 'S':printf("查询成功\n"); break;
			}
		}
	}
}