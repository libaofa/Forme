#include "lbf.h"

Genealogy *Build_Genealogy(Genealogy *head)
{
	if(head->kid[1] != NULL)
	{
		printf("\n�����Ѿ�����\n\n");
		system("pause");
	}
	else
	{
		head->kid[1] = Define_kid(head, 1);/*���ڵ�-1�����ӻ��ɷ�0������1*/
		head->kid[1]->data.dight = 1;
	}

	return head;
}