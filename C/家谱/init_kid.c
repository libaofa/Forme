#include "lbf.h"		//调用自定义头文件

Genealogy *Init_kid(Genealogy *d)	/*初始化*/
{
	int i = 0;				//作为下标
	for( i = 0; i < MAX; i++)	//Max次循环
	{
		d->kid[i] = NULL;		//将节点的孩子指针地址设为NULL
	}
	d->data.kid_num = 0;		//将节点的孩子个数初始化为0
	d->data.wife = 0;			//将其设置为孩子节点
	d->data.dight = 0;
	d->data.Exit = 0;

	return d;		//返回该节点
}