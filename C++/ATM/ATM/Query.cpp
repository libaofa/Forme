#include "lbf.h"        /*调用自定义库函数lbf.h*/

void Query(ATM *P1)     /*查询函数*/
{
    cout<<"用户名:";      /*输出*/
    cout<<P1->_Name()<<endl;        /*通过调用成员函数调用用户名*/
    cout<<"余  额:";   /*输出*/
    cout<<P1->_Balance()<<endl<<endl;/*通过调用成员函数调用余额*/
    system("pause");    /*暂停*/
}
