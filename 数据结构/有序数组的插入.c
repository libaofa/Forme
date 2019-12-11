#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
typedef enum {false, true} bool;
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    	ElementType Data[MAXSIZE];
    	Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标0开始存储 */
void PrintList( List L ); /* 裁判实现，细节不表 */
bool Insert( List L, ElementType X );

int main()
{
	List L;
    	ElementType X;

    	L = ReadInput();
    	scanf("%d", &X);
    	if ( Insert( L, X ) == false )
        	printf("Insertion failed.\n");
    	PrintList( L );

    	return 0;
}

List ReadInput()
{
	List P = (List)malloc(sizeof(struct LNode));
	P->Last = -1;
	int count = 0;
	int num = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d",&count);
	for(i = 0; i < count; i++)
	{	
		scanf("%d",&num);
		if(num >= P->Data[i])
		{
			P->Data[i] = num;
		}
		else
		{
			j = 0;
			while(P->Data[i] > num)
				j++;
			for(k = P->Last-1; k >= j; k--)
				P->Data[k++] = P->Data[k];
			P->Data[j] = num;
		}
		P->Last++;
	}
	return P;
}

bool Insert( List L, ElementType X )
{
	int i = 0;
	int j = 0;
	if(L->Last == MAXSIZE-1)
		return false;
	while(i<=L->Last)
	{
		if(X == L->Data[i++])
		{
			return false;
		}
	}
	i = 0;
	while(L->Data[i] < X)
	{	
		i++;
	}
	for(j = L->Last-1; j >= i; j--)
		L->Data[j++] = L->Data[j];
	L->Data[i] = X;
	L->Last++;
	return true;
}

void PrintList( List L )
{
	printf("LAST = %d\n", L->Last);
}
