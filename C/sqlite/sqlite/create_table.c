#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sqlite3.h"
#include "lbf.h"

void create_table(sqlite3 *db)
{
	if (db == NULL)
	{
		fprintf(stderr, "δ�������ݿ�\n");
	}
	else
	{
		char table_name[MAX_LINE+1];
		char comment[MAX_LINE+1];
		int column = 0;
		printf("��������Ҫ�����ı���:");
		fflush(stdout);
		getaline(table_name, MAX_LINE,0);
		printf("������ñ������,��С��%d:", MAX_COLUMN);
		fflush(stdout);
		column = getanumber();
		if (column > 0 && column < MAX_COLUMN)
		{
			int i = 0;
			char rc = 0;
			char *zErrMsg = NULL;
			char data[MAX_COLUMN][MAX_STR+2];
			char sql_str[(MAX_COLUMN+1)*(MAX_STR + 3)] = "create table ";
			for (; i < column; i++)
			{
				printf("�������%d�е��������ؼ���,����';'��β:", i + 1);
				fflush(stdout);
				getaline(data[i], MAX_STR,1);
				if (i != column - 1)
					strcat(data[i], ",");
				else
					strcat(data[i], ");");
			}
			strcat(sql_str, table_name);
			strcat(sql_str, " (");
			for (i = 0; i < column; i++)
			{
				strcat(sql_str, data[i]);
			}
			printf("%s\n", sql_str);
			rc = sqlite3_exec(db, sql_str, callback_1, 0, &zErrMsg);
			if (rc != SQLITE_OK) 
			{
				fprintf(stderr, "SQL error: %s\n", zErrMsg);
				sqlite3_free(zErrMsg);
			}
			else 
			{
				fprintf(stdout, "������ɹ�\n");
			}
		}
		else
		{
			fprintf(stderr, "������ʧ��\n");
		}
	}
}