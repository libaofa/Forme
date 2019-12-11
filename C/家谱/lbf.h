#ifndef LBF_F_INCLUDE	//�Ȳ���LBF_F_INCLUDE�Ƿ񱻺궨���
#define LBF_F_INCLUDE	//���LBF_F_INCLUDEû�б��궨���������LBF_F_INCLUDE������������1

#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>		//���ú�����getch�Ⱥ���
#include <stdio.h>		//���������������
#include <stdlib.h>		//����malloc��free�Ⱥ���
#include <string.h>		//ʹ��ͷ�ļ����ַ������ƺ���
#include <Windows.h>	//����������������ͣ����
#define MAX 10			/*�궨��Max��ֵ��Ϊ���Ӹ������ֵ*/
#define MAX_1 300		/*�궨��Max_1��ֵ��Ϊ������Ϣ���ֵ*/

struct Data				/*�Զ���ṹ��*/
{
	char name[10];		/*����*/
	char relation[20];	/*��ϵ*/
	int sex;		    /*�Ա�		1��		2Ů*/
	int gen;			/*����*/
	int line;			/*����*/
	int num;			/*���*/
	int flag;			/*�ɲ����־	1�ɲ���		0���ɲ���*/
	int kid_num;		/*���Ӹ���*/
	int wife;			/*1��ʾΪ����	0��ʾΪ����*/
	int dight;			/*��¼�ǵڼ�������*/
	int Exit;			/*�ж��Ƿ��Ǹ��ڵ�����һ������		1��		0����*/
};

typedef struct Genealogy		/*�Զ���ṹ��*/
{
	struct Data data;					/*����ָ��*/
	struct Genealogy *kid[MAX];			/*ָ���ӻ�����ż��ָ��*/
	struct Genealogy *dad;				/*ָ�����ָ��*/
}Genealogy;		/*�Զ���ṹ��ı���*/

int Count;		/*����һ�����α�����������ڵ����*/

void Home_page(Genealogy *);				/*��ҳ*/
Genealogy *Build_Genealogy(Genealogy *);	/*���������*/
Genealogy *Init_kid(Genealogy *);			/*��ʼ��������ڵ�*/
Genealogy *Define_kid(Genealogy *, int);	/*���������ڵ�*/
void Display(Genealogy *, int);				/*����		0��������	������ѯ����*/
Genealogy *Add_kid(Genealogy *, int);		/*��ӻ��޸Ķ�����ڵ�	0���	1�޸�*/
void Lookup(Genealogy *);					/*���ҽڵ�*/
void Lookup_1(Genealogy *);					/*��ʾ������Ϣ*/
Genealogy *Destruction(Genealogy *,int);	/*���ٶ�����*/
Genealogy *Sort(Genealogy *);				/*����*/
void Speed();								/*������*/
void Outfile(Genealogy *);					/*���ݱ���*/
Genealogy *Infile(Genealogy *);				/*���ݶ�ȡ*/

#endif		 //��ֹif