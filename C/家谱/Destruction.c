#include "lbf.h"

Genealogy *Destruction(Genealogy *d, int flag_1)
{
	system("cls");
	if(d == NULL && flag_1 == 1)
	{
		printf("\n���ײ�����,�봴��\n\n");
		system("pause");
	}
	else if(d != NULL)
	{
		int depth = 0;			/*���*/
        int lelve = 1;			/*����*/
        int rear = 1;			/*β�±�*/
        int front = 0;			/*�±��λ*/
		int i = 0;
		int j = 1;
		Genealogy *d1 = NULL;	
		Genealogy *d2 = NULL;	
		Genealogy *s[300];
        s[rear] = d;
        while(front < rear)
        {
            d1 = s[++front];
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
		depth++;
		j = lelve;
		while(j >= 1)
		{
			d1 = s[j];
			d2 = s[j]->dad;
			d2->kid[d1->data.dight] = NULL;
			d1->dad = NULL;
			free(d1);
			d1 = NULL;
			j--;
		}
		if(flag_1 == 1)
		{
			Speed();
			printf("\n\n��ճɹ�\n\n");
			system("pause");
		}
	}	
	return NULL;
}