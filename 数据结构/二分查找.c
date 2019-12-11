#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
	ElementType Data[MAXSIZE];
	Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标1开始存储 */
Position BinarySearch( List L, ElementType X );

int main()
{
	List L;
	ElementType X;
	Position P;

	L = ReadInput();
	scanf("%d", &X);
	P = BinarySearch( L, X );
	printf("%d\n", P);

	return 0;
}

List ReadInput()
{
	List P = (List)malloc(sizeof(struct LNode));
	P->Last = 0;
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

Position BinarySearch( List L, ElementType X )
{
	int i = 0;
	int j = L->Last;
	int c = (i+j)/2;
	int count = 0;
	while(count < L->Last)
	{
		if(X == L->Data[c])
			return c+1;
		else if(X > L->Data[c])
			i = c;
		else
			j = c;
		c = (i+j)/2;
		count++;
	}
	return 0;
}
