#include "lbf.h"		//�����Զ���ͷ�ļ�

Genealogy *Init_kid(Genealogy *d)	/*��ʼ��*/
{
	int i = 0;				//��Ϊ�±�
	for( i = 0; i < MAX; i++)	//Max��ѭ��
	{
		d->kid[i] = NULL;		//���ڵ�ĺ���ָ���ַ��ΪNULL
	}
	d->data.kid_num = 0;		//���ڵ�ĺ��Ӹ�����ʼ��Ϊ0
	d->data.wife = 0;			//��������Ϊ���ӽڵ�
	d->data.dight = 0;
	d->data.Exit = 0;

	return d;		//���ظýڵ�
}