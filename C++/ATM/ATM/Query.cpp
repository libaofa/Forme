#include "lbf.h"        /*�����Զ���⺯��lbf.h*/

void Query(ATM *P1)     /*��ѯ����*/
{
    cout<<"�û���:";      /*���*/
    cout<<P1->_Name()<<endl;        /*ͨ�����ó�Ա���������û���*/
    cout<<"��  ��:";   /*���*/
    cout<<P1->_Balance()<<endl<<endl;/*ͨ�����ó�Ա�����������*/
    system("pause");    /*��ͣ*/
}
