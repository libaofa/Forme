#pragma once
#pragma warning(disable:4996)
#include "sqlite3.h"
#define	MAX_NUMBER 5				//�����ַ�����
#define MAX_LINE 20					//�����ַ�����
#define	MAX_COLUMN 10				//�������ֵ
#define	MAX_STR	300					//�ֶ��ַ�����

void getaline(char [], int, int);	//����һ���ַ���,��������������Ϊ0�������ֶ�Ϊ1	--������
int getanumber();					//����һ������	--���
void home(sqlite3 *);				//��ҳ			--������
sqlite3 *database(sqlite3 *);		//�����ݿ�	--������
void create_table(sqlite3 *);		//������		--���㻨
void table_operation(sqlite3 *);	//�����		--����
static int callback(void *, int , char **, char **);	//�ص����� 
int callback_1(void *, int, char **, char **);			//�ص������ķ�װ