#ifndef _LBF_H
#define _LBF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct Data
{
	char name[21];		//姓名
	char phone[12];		//电话号	
	char relation[10];	//关系
}DATA;

typedef struct Phone 
{
	DATA data;
	struct Phone *next;
}PHONE;

void getaline(char [], int );
PHONE *menu();
PHONE *insert(PHONE *, int , int );
int display(PHONE *);
void query(PHONE *);
PHONE *backspace(PHONE *);
PHONE *modify(PHONE *);
void file_write(PHONE *);
PHONE *file_read();

#endif

