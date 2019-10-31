#pragma once
#pragma warning(disable:4996)
#include "sqlite3.h"
#define	MAX_NUMBER 5				//数字字符个数
#define MAX_LINE 20					//名字字符个数
#define	MAX_COLUMN 10				//表最大列值
#define	MAX_STR	300					//字段字符个数

void getaline(char [], int, int);	//输入一串字符串,命名第三个参数为0，输入字段为1	--吕国栋
int getanumber();					//输入一串数字	--李宝发
void home(sqlite3 *);				//首页			--韩金龙
sqlite3 *database(sqlite3 *);		//打开数据库	--韩金龙
void create_table(sqlite3 *);		//创建表		--高秀花
void table_operation(sqlite3 *);	//表操作		--贾亮
static int callback(void *, int , char **, char **);	//回调函数 
int callback_1(void *, int, char **, char **);			//回调函数的封装