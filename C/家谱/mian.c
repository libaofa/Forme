#include "lbf.h"

int main()			/*������*/
{
	/*��0������*/
	Genealogy *head = (Genealogy *)malloc(sizeof(Genealogy));
	head = Init_kid(head);
	strcpy(head->data.name, "δ֪");
	head->data.sex = 1;
	head->data.gen = 0;
	head->data.line = 0;
	head->data.flag = 1;
	head->data.num = 0;
	head->data.kid_num = 1;	
	strcpy(head->data.relation, "�޷���֤��������");
	/*��0����������*/
	head->kid[0] = (Genealogy *)malloc(sizeof(Genealogy));
	head->kid[0] = Init_kid(head->kid[0]);
	strcpy(head->kid[0]->data.name, "δ֪");
	head->kid[0]->data.flag = 0;
	head->kid[0]->data.sex = 2;
	head->kid[0]->data.gen = 0;
	head->kid[0]->data.line = 0;
	head->kid[0]->data.num = 0;
	head->kid[0]->data.wife = 1;
	head->data.kid_num = 1;		
	strcpy(head->kid[0]->data.relation, "�޷���֤�������ȵ�����");
	Count = 0;
	//Speed();
	head->kid[1] = Infile(head);
	Home_page(head);	/*������ҳ����*/

	return 0;
}