#include "lbf.h"		//�����Զ���ͷ�ļ�

void Home_page(Genealogy *head)		/*��ҳ*/
{
	int Choice = 0;		/*֤��һ�����α�����Ϊѡ��*/
	while(1)			/*����ѭ��*/
	{
		system("cls");	/*��������*/
		Outfile(head->kid[1]);
		printf("1.����������Ϣ\n");
		printf("2.��ӳ�Ա��Ϣ\n");
		printf("3.����������Ϣ\n");
		printf("4.���ҳ�Ա��Ϣ\n");
		printf("5.�޸ĳ�Ա��Ϣ\n");
		printf("6.���ټ�����Ϣ\n");
		printf("7.�˳�����ϵͳ\n\n");
		printf("���������ѡ��:");
		if( scanf("%d", &Choice) == 1)	//��������ʽ��ȷ����
		{
			switch(Choice)		//��Choice��Ϊ���غ����Ĳ���
			{
				case 1:head = Build_Genealogy(head);break;	//����1���ô���������
				case 2:head->kid[1] = Add_kid(head->kid[1], 0);break;	//������ӽڵ�
				case 3:Display(head->kid[1], 0);break;			//���ñ�������
				case 4:Lookup(head->kid[1]);break;
				case 5:head->kid[1] = Add_kid(head->kid[1], 1);break;
				case 6:
				{
					head->kid[1] = Destruction(head->kid[1],1);
					head->data.gen = 0;
					head->data.line = 0;
					head->data.flag = 1;
					head->data.num = 0;
					Count = 0;
					//system("pause");
					break;
				}
				case 7:
				{
					head->kid[1] = Destruction(head->kid[1], 0);
					free(head->kid[0]);
					free(head);
					exit(0);
					break;
				}
				default:break;			//��������1~7������
			};
		}
		fflush(stdin);		//��ջ�����
		Choice = 0;			//��ʼ��
		
	}
}