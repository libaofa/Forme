#include "lbf.h"

void Outfile(Genealogy *d)
{
	FILE *fp = fopen("家谱.txt", "w");
	
	if(fp == NULL)
		printf("文件打开失败\n");
	else if(fp != NULL && d != NULL) 
	{
		int depth = 0;			/*深度*/
        int lelve = 1;			/*总数*/
        int rear = 1;			/*尾下标*/
        int front = 0;			/*下标进位*/
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