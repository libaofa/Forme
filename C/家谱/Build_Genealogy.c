#include "lbf.h"

Genealogy *Build_Genealogy(Genealogy *head)
{
	if(head->kid[1] != NULL)
	{
		printf("\n家谱已经存在\n\n");
		system("pause");
	}
	else
	{
		head->kid[1] = Define_kid(head, 1);/*根节点-1，妻子或丈夫0，孩子1*/
		head->kid[1]->data.dight = 1;
	}

	return head;
}