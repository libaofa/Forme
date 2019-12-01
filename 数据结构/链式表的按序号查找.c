#include <stdio.h>
#include <stdlib.h>

#define ERROR -1
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    	ElementType Data;
    	PtrToLNode Next;
};
typedef PtrToLNode List;

List Read(); /* 细节在此不表 */

ElementType FindKth( List L, int K );

int main()
{
    	int N, K;
    	ElementType X;
    	List L = Read();
    	scanf("%d", &N);
    	while ( N-- ) 
	{
        	scanf("%d", &K);
        	X = FindKth(L, K);
        	if ( X!= ERROR )
            		printf("%d ", X);
       		else
            		printf("NA ");
    	}
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

ElementType FindKth( List L, int K )
{
	if(L->Next != NULL)
	{
		int i =  0;
		List p1 = L->Next;
		while(p1)
		{
			if(p1->Data == K)
				return p1->Data;
			p1 = p1->Next;
		}
	}
	return ERROR;
}
