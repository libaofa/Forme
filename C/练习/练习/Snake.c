#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable: 4996)

typedef struct Sknke
{
	int x[100];
	int y[100];
	int length;
}SKNAE;

typedef struct Food
{
	int x;
	int y;
}FOOD;

SKNAE *game(SKNAE *s1, FOOD *f1, HANDLE hout);
void gotoxy(HANDLE hout, int x, int y);				//xy位置
void frame(HANDLE hout);							//定义边框
SKNAE *initial_boby(SKNAE *s1);						//初始化身体
void print_boby(SKNAE *s1, HANDLE hout);			//打印身体
SKNAE *Shift_boby(SKNAE *s1,int shift, HANDLE hout);//移动蛇身
int initial_food(FOOD *f1, SKNAE *s1, HANDLE hout);	//生成食物
void print_count(int count, HANDLE hout);			//计分
int die_snake(SKNAE *s1);							//死亡
void start_view(SKNAE *s1, HANDLE hout);			//开始画面
void die_view(SKNAE *s1, HANDLE hout);				//死亡画面
void game_ranking(HANDLE hout);						//排行榜
void update_rankint(FILE *fp1, SKNAE *s1);			//更新排行榜

int main()
{
	int ch = 0;
	int i = 0;
	FILE *fp1 = NULL;
	SKNAE *s1 = (SKNAE *)malloc(sizeof(struct Sknke));
	FOOD *f1 = (FOOD *)malloc(sizeof(struct Food));
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	start_view(s1, hout);
	while (1)
	{
		ch = getch();
		if (ch == 13)		//Enter
		{
			s1 = game(s1,f1, hout);
			die_view(s1,hout);
			update_rankint(fp1, s1);
		}
		else if (ch == 27)		//Esc
		{
			break;
		}
		else
		{
			continue;
		}
	}
	free(s1);
	free(f1);
	gotoxy(hout, 30, 20);

	return 0;
}

SKNAE * game(SKNAE *s1, FOOD *f1, HANDLE hout)
{
	int ch = 0;
	int shift = 0;
	int temp_shift = 0;
	int count = 0;
	int die = 0;
	
	frame(hout);
	s1 = initial_boby(s1);
	srand((unsigned)time(NULL));
	f1->x = ((rand() % 18 + 1) * 2);
	f1->y = rand() % 18 + 1;
	gotoxy(hout, f1->x, f1->y);
	printf("●");
	while(1)
	{
		game_ranking(hout);
		die = die_snake(s1);
		if (die)
			break;
		print_boby(s1, hout);
		count = initial_food(f1, s1, hout);
		print_count(count, hout);
		Sleep(300);
		if (kbhit())
		{
			ch = getch();
			if (ch == 224)
			{
				ch = getch();
				switch (ch)
				{
				case 72:					//上
					if (shift != 2)
					{ 
						shift = 1;
					}
					break;
				case 80:					//下
					if (shift != 1)
					{
						shift = 2;
					}
					break;
				case 75:					//左
					if (shift != 4 && shift != 0)
					{
						shift = 3;
					}
					break;
				case 77:					//右
					if (shift != 3)
					{
						shift = 4;
					}
					break;
				}
			}
		}
		s1 = Shift_boby(s1, shift, hout);
	}
	return s1;
}

void gotoxy(HANDLE hout, int x, int y) {
	//COORD是WindowsAPI中定义的一种结构，表示一个字符在控制台屏幕上的坐标
	COORD pos;
	pos.X = x;
	pos.Y = y;
	//SetConsoleCursorPosition是API中定位光标位置的函数。
	SetConsoleCursorPosition(hout, pos);
}

void frame(HANDLE hout)
{
	int i = 0;
	int width = 0;
	gotoxy(hout, 0, 0);
	for (i = 0; i < 20; i++)
	{
		printf("■");
	}
	printf("\n");
	for (width = 1; width < 19; width++)
	{
		printf("■");
		for (i = 0; i < 18; i++)
		{
			printf("  ");
		}
		printf("■\n");
	}
	for (i = 0; i < 20; i++)
	{
		printf("■");
	}
	printf("\n");
}

SKNAE *initial_boby(SKNAE *s1)
{
	s1->x[0] = 10;
	s1->y[0] = 10;
	s1->x[1] = 8;
	s1->y[1] = 10;
	s1->x[2] = 6;
	s1->y[2] = 10;
	s1->length = 3;

	return s1;
}

void print_boby(SKNAE *s1, HANDLE hout)
{
	int i = 1;
	gotoxy(hout, s1->x[0], s1->y[0]);
	printf("■");
	for (i = 1; i < s1->length; i++)
	{
		gotoxy(hout, s1->x[i], s1->y[i]);
		printf("□");
	}
}

SKNAE *Shift_boby(SKNAE *s1, int shift, HANDLE hout)	//1上	2下		3左		4右		0保持		
{
	int i = 0;
	gotoxy(hout, s1->x[s1->length-1], s1->y[s1->length-1]);
	printf(" ");
	for (i = s1->length-1; i >= 0; i--)
	{
		if (i == 0)
		{
			if(shift == 4 || shift == 0)
				s1->x[i] += 2;
			else if(shift == 3)
				s1->x[i] -= 2;
			else if (shift == 2)
				s1->y[i] += 1;
			else if (shift == 1)
				s1->y[i] -= 1;
		}
		else
		{
			s1->x[i] = s1->x[i - 1];
			s1->y[i] = s1->y[i - 1];
		}
	}

	return s1;
}

int initial_food(FOOD *f1, SKNAE *s1,  HANDLE hout)
{
	int i = 0;
	srand((unsigned)time(NULL));
	if (f1->x == s1->x[0] && f1->y == s1->y[0])
	{
		f1->x = ((rand() % 18 + 1) * 2);
		f1->y = rand() % 18 + 1;
		gotoxy(hout, f1 ->x, f1->y);
		printf("●");
		s1->length += 1;
	}
	for (i = 1; i < s1->length; i++)
	{
		if (f1->x == s1->x[i] && f1->y == s1->y[i])
		{
			f1->x = ((rand() % 18 + 1) * 2);
			f1->y = rand() % 18 + 1;
			gotoxy(hout, f1->x, f1->y);
			printf("●");
		}
	}
	return s1->length - 3;
}

void print_count(int count, HANDLE hout)
{
	gotoxy(hout, 0, 22);
	printf("分数:%d", count);
}

int die_snake(SKNAE *s1)
{
	int i = 0;
	if (s1->x[0] == 0 || s1->x[0] == 38 ||
			s1->y[0] == 0 || s1->y[0] == 19)
	{
		return 1;
	}
	for (i = 4; i < s1->length; i++)
	{
		if (s1->x[0] == s1->x[i] && s1->y[0] == s1->y[i])
		{
			return 1;
		}
	}
	return 0;
}

void start_view(SKNAE *s1, HANDLE hout)
{
	frame(hout);
	gotoxy(hout, 10, 8);
	printf("贪吃蛇游戏");
	gotoxy(hout, 10, 10);
	printf("Enter开始游戏");
	gotoxy(hout, 10, 12);
	printf("Esc结束游戏");
	gotoxy(hout, 10, 14);
	printf("游戏只记录排行榜前十名");
	gotoxy(hout, 0, 22);
	printf("				");
}

void die_view(SKNAE *s1, HANDLE hout)
{
	frame(hout);
	gotoxy(hout, 10, 8);
	printf("游戏结束,最终分数为%d", s1->length-3);
	gotoxy(hout, 10, 10);
	printf("Enter开始游戏");
	gotoxy(hout, 10, 12);
	printf("Esc结束游戏");
	gotoxy(hout, 0, 22);
	printf("				");
}

void game_ranking(HANDLE hout)
{
	int ranking = 0;
	int count = 0;
	int i = 0;
	FILE * fp2 = fopen("ranking.txt", "r");
	gotoxy(hout, 50, 0);
	printf("名次		记录");
	if (!fp2)
	{
		fp2 = fopen("ranking.txt", "w");
		
		for (i = 1; i < 11; ++i)
		{
			gotoxy(hout, 50, i);
			printf("%d		0", i);
		}
	}
	else
	{
		i = 1;
		while (!feof(fp2))
		{
			gotoxy(hout, 50, i);
			fscanf(fp2, "%d\n", &count);
			printf("%d		%d\n",i++, count);
		}
	}
	fclose(fp2);
}

void update_rankint(FILE *fp1, SKNAE *s1)
{
	int count[10];
	int i = 0;
	int j = 0;
	int flag = 0;
	FILE *fp2 = NULL;
	for (i = 0; i < 10; i++)
	{
		count[i] = 0;
	}
	fp1 = fopen("ranking.txt", "r");
	if (!fp1)
	{
		fp1 = fopen("ranking.txt", "w");
	}
	i = 0;
	while (!feof(fp1))
	{
		fscanf(fp1, "%d\n", &count[i]);
		if (s1->length - 3 >= count[i] && !flag)
		{
			j = i;
			flag = 1;
		}
		i++;
	}
	fclose(fp1);
	i = 0;
	if(flag)
	{
		for (i = 9; i > j; i--)
		{
			count[i] = count[i - 1];
		}
		count[j] = s1->length - 3;
	}
	
	fp2 = fopen("ranking.txt", "w");
	for (i = 0; i < 10; i++)
	{
		fprintf(fp2, "%d\n", count[i]);
	}
	fclose(fp2);
}