#include <stdio.h>
#include "lbf.h"

static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
	int i;
	for (i = 0; i<argc; i++) 
	{
		printf("%s = %s\t", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");

	return 0;
}

int callback_1(void *NotUsed, int argc, char **argv, char **azColName)
{
	return callback(NotUsed, argc, argv, azColName);
}