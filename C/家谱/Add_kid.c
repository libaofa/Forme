#include "lbf.h"

Genealogy *Add_kid(Genealogy *d, int flag_1)
{
	system("cls");
	if(d == NULL)
	{
		printf("\n���ײ�����,�봴��\n\n");
	}
	else
	{
		int depth = 0;			/*���*/
        int lelve = 1;			/*����*/
        int rear = 1;			/*β�±�*/
        int front = 0;			/*�±��λ*/
		int Choice = 0;
		int save = 1;
		int i = 0;
		int j = 0;
		Genealogy *d1 = NULL;	
		Genealogy *s[MAX_1];
		s[rear] = d;
		if(flag_1 == 0)
			printf("��ӳ�Ա��Ϣ\n\n");
		else
			printf("�޸ĳ�Ա��Ϣ\n\n");
		while(front < rear)
        {
            d1 = s[++front];
			while(i < MAX)
			{
				if(d1->kid[i] != NULL)
				{	
					s[++rear] = d1->kid[i];
					j++;
				}
				i++;
			}
			printf("[%d]-%d��%s-", d1->data.num, d1->data.line, (d1->data.sex == 1)?"����":"Ů��");
			printf("(%s��%s):%s        ", d1->dad->data.name, d1->data.relation, d1->data.name);
			if(d1->data.sex == 1 && flag_1 == 0)
			{
				printf("����:%s\t", (d1->kid[0] != NULL)?"��":"��");
			}
			if(flag_1 == 0)
			{
				printf("����:%d\t", (d1->data.kid_num >= 1)?d1->data.kid_num:0);
			}
			if(d1->data.flag == 1 && flag_1 == 0)
			{
				printf("\t�ɲ���");
			}
			printf("\n\n");
            if(front == lelve)
            {
                lelve = rear;
                depth++;
            }
			i = 0;
			j = 0;
        }
		printf("\n���������ѡ��ı��:");
		if( scanf("%d", &Choice) == 1)
		{
			if(flag_1 == 1)
			{
				if(Choice <= lelve && Choice >=0)
				{
					int Break = 1;
					int Choice_1 = 0;
					printf("\n1.��\t2.��\n");
					printf("�Ƿ��޸ĳ�Ա:");
					while(Break)                         /*��ѭ��*/
					{ 
						Choice_1 = _getch();               /*�޻���������һ���ַ�*/
						if(Choice_1 >= 49 && Choice_1 <= 50) /*���������ַ���ASCII����49��52֮��*/
						{
							Break = 0;           /*��flag����0*/
							Choice_1 -= 48;        /*�õ����������*/
						}
					}
					printf("%s\n\n", (Choice_1==1)?"��":"��");
					getchar();
					if(Choice_1 == 1)
					{
						printf("�������Ա����:");
						scanf("%10s", &s[Choice]->data.name);
						printf("1.��\t2.Ů\n");
						printf("�޸ĳ�Ա�Ա�:");
						if(s[Choice]->kid[0] != NULL || s[Choice]->dad->kid[1] != NULL)
						{
							printf("�·������ӳ�Ա,�޷��޸��Ա�\n\n");
						}
						else
						{
							Break = 1;
							Choice = 0;
							while(Break)                         /*��ѭ��*/
							{
								Choice = _getch();               /*�޻���������һ���ַ�*/
								if(Choice >= 49 && Choice<= 50) /*���������ַ���ASCII����49��52֮��*/
								{
									Break = 0;           /*��flag����0*/
									Choice -= 48;        /*�õ����������*/
								}
							}
							if( Choice == 1)
							{
								printf("��\n");
								d1->data.sex = 1;
								d1->data.flag = 1;
							}
							else if(Choice == 2)
							{
								printf("Ů\n");
								d1->data.sex = 2;
								d1->data.flag = 0;
							}
						}
						printf("�޸ĳɹ�\n\n");
					}
				}
				else if(Choice > lelve || Choice <= 0)
				{
					printf("\n�ó�Ա������\n\n");
				}
			}
			else
			{
				if(Choice <= lelve && Choice > 0 && s[Choice]->data.flag == 1)
				{
					int Break = 1;
					int Choice_1 = 0;
					printf("\n1.��\t2.��\n");
					printf("�Ƿ�����ӳ�Ա:");
					while(Break)                         /*��ѭ��*/
					{ 
						Choice_1 = _getch();               /*�޻���������һ���ַ�*/
						if(Choice_1 >= 49 && Choice_1 <= 50) /*���������ַ���ASCII����49��52֮��*/
						{
							Break = 0;           /*��flag����0*/
							Choice_1 -= 48;        /*�õ����������*/
						}
					}
					printf("%s\n\n", (Choice_1==1)?"��":"��");
					getchar();
					if(Choice_1 == 1)
					{
						i = 0;
						while(i < MAX)
						{
							if(s[Choice]->kid[i] == NULL)
							{
								break;
							}
							i++;
						}
						while(i < MAX)
						{
							int Choice_2 = 0;
							Break = 1;
							if(i != 0)
							{
								s[Choice]->kid[0]->data.Exit = 0;
								s[Choice]->kid[i-1]->data.Exit = 0;
							}
							//s[Choice]->kid[i]->data.Exit = 1;
							s[Choice]->kid[i] = Define_kid(s[Choice], i);/*���ڵ�-1�����ӻ��ɷ�0������1*/
							printf("1.��\t2.��\n");
							printf("�Ƿ����:");
							while(Break)                         /*��ѭ��*/
							{ 
								fflush(stdin);
								Choice_2 = _getch();               /*�޻���������һ���ַ�*/
								if(Choice_2 >= 49 && Choice_1 <= 50) /*���������ַ���ASCII����49��52֮��*/
								{
									Break = 0;           /*��flag����0*/
									Choice_2 -= 48;        /*�õ����������*/
								}
							}
							printf("%s\n\n", (Choice_2==1)?"��":"��");
							getchar();
							if(Choice_2 != 1)
							{
								break;
							}
							i++;
						}
						if(i == MAX)
						{
							s[Choice]->data.flag = 0;
						}
					}
				}
				else if(Choice > lelve || Choice <= 0)
				{
					printf("\n�ó�Ա������\n\n");
				}
				else if(s[Choice]->data.flag != 1 && Choice < 1)
				{
					printf("\n�޷����\n\n");
				}
			}
		}
		else
		{
			fflush(stdin);
			Choice = 0;
			printf("\n������󣬷�����ҳ\n\n");
		}
		d = Sort(d);
	}
	system("pause");
	
	return d;
}