#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data; /* 存储结点数据 */
    PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

int FactorialSum( List L );

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}

int FactorialSum( List L )
{
	int temp = 0;
	int CK = 1;
	int i = 1;
	while(L != NULL)
	{
		if(L->Data == 0 || L->Data == 1)
			CK = 1;
		else
		{
			i = 1;
			while(i <= L->Data)
				CK *= i++;
		}
		temp += CK;
		CK = 1;
		i = 1;
		L = L->Next;
		
	}
	return temp;
}
