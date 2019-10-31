#ifndef LBF_F_INCLUDE	//先测试LBF_F_INCLUDE是否被宏定义过
#define LBF_F_INCLUDE	//如果LBF_F_INCLUDE没有被宏定义过，定义LBF_F_INCLUDE，并编译程序段1

#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>		//调用函数中getch等函数
#include <stdio.h>		//调用输入输出函数
#include <stdlib.h>		//调用malloc，free等函数
#include <string.h>		//使用头文件中字符串控制函数
#include <Windows.h>	//调用清屏函数和暂停函数
#define MAX 10			/*宏定义Max的值作为孩子个数最大值*/
#define MAX_1 300		/*宏定义Max_1的值作为保存信息最大值*/

struct Data				/*自定义结构体*/
{
	char name[10];		/*姓名*/
	char relation[20];	/*关系*/
	int sex;		    /*性别		1男		2女*/
	int gen;			/*代数*/
	int line;			/*行数*/
	int num;			/*编号*/
	int flag;			/*可插入标志	1可插入		0不可插入*/
	int kid_num;		/*孩子个数*/
	int wife;			/*1表示为妻子	0表示为孩子*/
	int dight;			/*记录是第几个孩子*/
	int Exit;			/*判断是否是父节点的最后一个孩子		1是		0不是*/
};

typedef struct Genealogy		/*自定义结构体*/
{
	struct Data data;					/*数据指针*/
	struct Genealogy *kid[MAX];			/*指向孩子或者配偶的指针*/
	struct Genealogy *dad;				/*指向父类的指针*/
}Genealogy;		/*自定义结构体的别名*/

int Count;		/*声明一个整形变量用来保存节点个数*/

void Home_page(Genealogy *);				/*首页*/
Genealogy *Build_Genealogy(Genealogy *);	/*创建多叉树*/
Genealogy *Init_kid(Genealogy *);			/*初始化多叉树节点*/
Genealogy *Define_kid(Genealogy *, int);	/*定义多叉树节点*/
void Display(Genealogy *, int);				/*遍历		0正常遍历	其他查询调用*/
Genealogy *Add_kid(Genealogy *, int);		/*添加或修改多叉树节点	0添加	1修改*/
void Lookup(Genealogy *);					/*查找节点*/
void Lookup_1(Genealogy *);					/*显示查找信息*/
Genealogy *Destruction(Genealogy *,int);	/*销毁二叉树*/
Genealogy *Sort(Genealogy *);				/*排序*/
void Speed();								/*进度条*/
void Outfile(Genealogy *);					/*数据保存*/
Genealogy *Infile(Genealogy *);				/*数据读取*/

#endif		 //终止if