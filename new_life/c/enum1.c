#include<stdio.h>
enum DAY{MON=1, TUE, WED=8, THU, FRI, SA, SUN};

int main()
{
        enum DAY day;
        for(day=MON;day<=SUN;day++)
        {
                printf("day=%d\n",day);
        }
        return 0;
}

/*
	lfb
	2019/11/5
	如果枚举类型不连续，类似程序中的形式，1和8中间只有一个变量
	根据正常理解应该为1、2、8、9、10、11、12
	但是结果是1、2、3、4、5、6、7、8、9、10、11、12
	如果顺序颠倒，后面的值颠倒，将FRI设置为7，
	则结果为1、2、3、4、5、6、7、8、9
*/
