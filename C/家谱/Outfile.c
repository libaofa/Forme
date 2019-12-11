#include "lbf.h"

void Outfile(Genealogy *d)
{
	FILE *fp = fopen("����.txt", "w");
	
	if(fp == NULL)
		printf("�ļ���ʧ��\n");
	else if(fp != NULL && d != NULL) 
	{
		int depth = 0;			/*���*/
        int lelve = 1;			/*����*/
        int rear = 1;			/*β�±�*/
        int front = 0;			/*�±��λ*/
		int i = 0;
		int j = 1;
		Genealogy *d1 = NULL;	
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

		for(i = 1; i<=lelve; i++)
		{
			d1 = s[i];
			//fwrite(d1, sizeof(d1), 1, fp);
			
			fprintf(fp, "%s\t%s\t%d\t", d1->data.name, d1->data.relation, d1->data.sex);
			fprintf(fp, "%d\t%d\t%d\t", d1->data.gen, d1->data.line, d1->data.num);
			fprintf(fp, "%d\t%d\t%d\t", d1->data.flag, d1->data.kid_num, d1->data.wife);
			fprintf(fp, "%d\t%d\n", d1->data.dight, d1->data.Exit);
		}
	}
	fclose(fp);
}