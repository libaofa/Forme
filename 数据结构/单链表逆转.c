#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节不在此表 */
void Print( List L ); /* 细节不在此表 */

List Reverse( List L );

int main()
{
	List L1, L2;
	L1 = Read();
	L2 = Reverse(L1);
	Print(L1);
	Print(L2);
	
	return 0;
}

List Read()
{
	int n = 0;
	int i = 0;
	List p1 = NULL;
	List p2 = NULL;
	List L = NULL;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		p2 = (List)malloc(sizeof(struct Node));
		scanf("%d",&p2->Data);
		if(L == NULL)
		{	
			p1 = p2;
			L = p1;
		}
		p1->Next = p2;
		p1 = p1->Next;
	}
	p2->Next = NULL;
	return L;
}

void Print( List L )
{
	List L1 = L;
	while(L1)
	{
		printf("%d ", L1->Data);
		L1 = L1->Next;
	}
	printf("\n");
}

List Reverse( List L )
{
	List F = L;
	List B = NULL;
	L = NULL;
	while(F)
	{
		B = F;
		F = F->Next;
		B->Next = L;
		L = B;
	}
	return L;
}
