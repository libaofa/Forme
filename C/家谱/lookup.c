#include "lbf.h"

void Lookup(Genealogy *d)
{
	system("cls");
	if(d == NULL)
	{
		printf("\n���ײ�����,�봴��\n\n");
		system("pause");
	}
	else
	{
		int Choice = 0;
		printf("��������Ҫ��Ѱ��Ա�ı��:");
		if( scanf("%d", &Choice) == 1)	//��������ʽ��ȷ����
		{
			if(Choice > Count || Choice < 1)
			{
				printf("\n\n�ó�Ա������,");
				printf("������1~%d֮�����ֵ\n\n",Count);
				system("pause");
			}
			else
			{
				Display(d, Choice);
			}
		}
		else
		{
			fflush(stdin);		//��ջ�����
			Choice = 0;			//��ʼ��
			printf("\n\n�������,������ҳ\n\n");
			system("pause");
		}
	}
}