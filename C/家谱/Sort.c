#include "lbf.h"

Genealogy *Sort(Genealogy *d)
{
	int depth = 0;			/*深度*/
    int lelve = 1;			/*总数*/
    int rear = 1;			/*尾下标*/
    int front = 0;			/*下标进位*/
	int i = 0;
	int j = 1;
	Genealogy *d1 = NULL;	
	Genealogy *s[MAX_1];
    s[rear] = d;
    while(front < rear)
    {
		d1 = s[++front];
		d1->data.num = front;
		while(i < MAX)
		{
			if(d1->kid[i] != NULL)
				s[++rear] = d1->kid[i];
			i++;
		}
        if(front == lelve)
        {
			lelve = rear;
            depth++;
		}
		i = 0;
    }

	return d;
}