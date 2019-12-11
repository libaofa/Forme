#include "lbf.h"

int main()
{
	PHONE *p1 = NULL;// = (PHONE *)malloc(sizeof(PHONE));
	PHONE *p2 = NULL;
	PHONE *p3 = NULL;

	//p1->next = NULL;
	p1 = menu();
	p2 = p1;
	p3 = p1->next;
	while(p2->next)
	{
		p2->next = p3->next;
		free(p3);
		p3 = p2->next;
	}
	free(p1);
	
	return 0;
}
