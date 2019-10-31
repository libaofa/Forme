#include "lbf.h"

Genealogy *Add_kid(Genealogy *d, int flag_1)
{
	system("cls");
	if(d == NULL)
	{
		printf("\n家谱不存在,请创建\n\n");
	}
	else
	{
		int depth = 0;			/*深度*/
        int lelve = 1;			/*总数*/
        int rear = 1;			/*尾下标*/
        int front = 0;			/*下标进位*/
		int Choice = 0;
		int save = 1;
		int i = 0;
		int j = 0;
		Genealogy *d1 = NULL;	
		Genealogy *s[MAX_1];
		s[rear] = d;
		if(flag_1 == 0)
			printf("添加成员信息\n\n");
		else
			printf("修改成员信息\n\n");
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
			printf("[%d]-%d代%s-", d1->data.num, d1->data.line, (d1->data.sex == 1)?"男性":"女性");
			printf("(%s的%s):%s        ", d1->dad->data.name, d1->data.relation, d1->data.name);
			if(d1->data.sex == 1 && flag_1 == 0)
			{
				printf("妻子:%s\t", (d1->kid[0] != NULL)?"有":"无");
			}
			if(flag_1 == 0)
			{
				printf("孩子:%d\t", (d1->data.kid_num >= 1)?d1->data.kid_num:0);
			}
			if(d1->data.flag == 1 && flag_1 == 0)
			{
				printf("\t可插入");
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
		printf("\n请键入您的选择的编号:");
		if( scanf("%d", &Choice) == 1)
		{
			if(flag_1 == 1)
			{
				if(Choice <= lelve && Choice >=0)
				{
					int Break = 1;
					int Choice_1 = 0;
					printf("\n1.是\t2.否\n");
					printf("是否修改成员:");
					while(Break)                         /*死循环*/
					{ 
						Choice_1 = _getch();               /*无缓冲区输入一个字符*/
						if(Choice_1 >= 49 && Choice_1 <= 50) /*如何输出的字符的ASCII码在49到52之间*/
						{
							Break = 0;           /*令flag等于0*/
							Choice_1 -= 48;        /*得到输入的数字*/
						}
					}
					printf("%s\n\n", (Choice_1==1)?"是":"否");
					getchar();
					if(Choice_1 == 1)
					{
						printf("请输入成员姓名:");
						scanf("%10s", &s[Choice]->data.name);
						printf("1.男\t2.女\n");
						printf("修改成员性别:");
						if(s[Choice]->kid[0] != NULL || s[Choice]->dad->kid[1] != NULL)
						{
							printf("下方含有子成员,无法修改性别\n\n");
						}
						else
						{
							Break = 1;
							Choice = 0;
							while(Break)                         /*死循环*/
							{
								Choice = _getch();               /*无缓冲区输入一个字符*/
								if(Choice >= 49 && Choice<= 50) /*如何输出的字符的ASCII码在49到52之间*/
								{
									Break = 0;           /*令flag等于0*/
									Choice -= 48;        /*得到输入的数字*/
								}
							}
							if( Choice == 1)
							{
								printf("男\n");
								d1->data.sex = 1;
								d1->data.flag = 1;
							}
							else if(Choice == 2)
							{
								printf("女\n");
								d1->data.sex = 2;
								d1->data.flag = 0;
							}
						}
						printf("修改成功\n\n");
					}
				}
				else if(Choice > lelve || Choice <= 0)
				{
					printf("\n该成员不存在\n\n");
				}
			}
			else
			{
				if(Choice <= lelve && Choice > 0 && s[Choice]->data.flag == 1)
				{
					int Break = 1;
					int Choice_1 = 0;
					printf("\n1.是\t2.否\n");
					printf("是否添加子成员:");
					while(Break)                         /*死循环*/
					{ 
						Choice_1 = _getch();               /*无缓冲区输入一个字符*/
						if(Choice_1 >= 49 && Choice_1 <= 50) /*如何输出的字符的ASCII码在49到52之间*/
						{
							Break = 0;           /*令flag等于0*/
							Choice_1 -= 48;        /*得到输入的数字*/
						}
					}
					printf("%s\n\n", (Choice_1==1)?"是":"否");
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
							s[Choice]->kid[i] = Define_kid(s[Choice], i);/*根节点-1，妻子或丈夫0，孩子1*/
							printf("1.是\t2.否\n");
							printf("是否继续:");
							while(Break)                         /*死循环*/
							{ 
								fflush(stdin);
								Choice_2 = _getch();               /*无缓冲区输入一个字符*/
								if(Choice_2 >= 49 && Choice_1 <= 50) /*如何输出的字符的ASCII码在49到52之间*/
								{
									Break = 0;           /*令flag等于0*/
									Choice_2 -= 48;        /*得到输入的数字*/
								}
							}
							printf("%s\n\n", (Choice_2==1)?"是":"否");
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
					printf("\n该成员不存在\n\n");
				}
				else if(s[Choice]->data.flag != 1 && Choice < 1)
				{
					printf("\n无法添加\n\n");
				}
			}
		}
		else
		{
			fflush(stdin);
			Choice = 0;
			printf("\n输入错误，返回首页\n\n");
		}
		d = Sort(d);
	}
	system("pause");
	
	return d;
}