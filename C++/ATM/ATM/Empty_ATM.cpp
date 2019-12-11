#include "lbf.h"            /*调用自定义库函数lbf.h*/

void Empty_ATM(ATM *Phead)          /*清空函数*/
{
    if(Phead != NULL)               /*头结点不为空*/
    {
        ATM *P1 = Phead;            /*保存头结点的地址*/
        ATM *P2 = NULL;             /*定义一个地址为空节点*/

        while(P1->Pnext != NULL)    /*循环到最后一个节点*/
        {
            P2 = P1->Pnext;         /*让P2指向p1下一个节点*/
            P1->Pnext = P2->Pnext;  /*跨过p2节点*/
            delete P2;              /*释放p2*/
        }
        delete P1;                  /*释放p1*/
    }

    exit(0);                        /*退出程序*/
}
