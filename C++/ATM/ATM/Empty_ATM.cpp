#include "lbf.h"            /*�����Զ���⺯��lbf.h*/

void Empty_ATM(ATM *Phead)          /*��պ���*/
{
    if(Phead != NULL)               /*ͷ��㲻Ϊ��*/
    {
        ATM *P1 = Phead;            /*����ͷ���ĵ�ַ*/
        ATM *P2 = NULL;             /*����һ����ַΪ�սڵ�*/

        while(P1->Pnext != NULL)    /*ѭ�������һ���ڵ�*/
        {
            P2 = P1->Pnext;         /*��P2ָ��p1��һ���ڵ�*/
            P1->Pnext = P2->Pnext;  /*���p2�ڵ�*/
            delete P2;              /*�ͷ�p2*/
        }
        delete P1;                  /*�ͷ�p1*/
    }

    exit(0);                        /*�˳�����*/
}
