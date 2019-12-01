#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    	ElementType Data;
    	PtrToLNode Next;
};
typedef PtrToLNode List;

List Read(); /* 细节在此不表 */

int Length( List L );

int main()
{
    	List L = Read();
    	printf("%d\n", Length(L));
    	return 0;
}

List Read()
{	
	List p1 = (List)malloc(sizeof(struct LNode));
	List p2 = NULL;
	List L = p1;
	p1->Next = NULL;
	int num = 0;
	scanf("%d", &num);
	while(num != -1)
	{
		p2 = (List)malloc(sizeof(struct LNode));
		p2->Data = num;
		p2->Next = NULL;
		p1->Next = p2;
		p1 = p2;
		scanf("%d", &num);
	}
	return L;
}
int Length( List L )
{
	if(L->Next != NULL)
	{
		int i =  0;
		List p1 = L->Next;
		while(p1)
		{
			i++;
			p1 = p1->Next;
		}
		return i;
	}
	return 0;
}


