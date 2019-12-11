#include "lbf.h"		//调用自定义头文件

void Home_page(Genealogy *head)		/*首页*/
{
	int Choice = 0;		/*证明一个整形变量作为选择*/
	while(1)			/*无限循环*/
	{
		system("cls");	/*清屏函数*/
		Outfile(head->kid[1]);
		printf("1.建立家谱信息\n");
		printf("2.添加成员信息\n");
		printf("3.遍历家谱信息\n");
		printf("4.查找成员信息\n");
		printf("5.修改成员信息\n");
		printf("6.销毁家谱信息\n");
		printf("7.退出整个系统\n\n");
		printf("请键入您的选择:");
		if( scanf("%d", &Choice) == 1)	//如果输入格式正确的是
		{
			switch(Choice)		//将Choice作为开关函数的参数
			{
				case 1:head = Build_Genealogy(head);break;	//输入1调用创建树函数
				case 2:head->kid[1] = Add_kid(head->kid[1], 0);break;	//调用添加节点
				case 3:Display(head->kid[1], 0);break;			//调用遍历函数
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
				default:break;			//如果输入非1~7的数字
			};
		}
		fflush(stdin);		//清空缓冲区
		Choice = 0;			//初始化
		
	}
}