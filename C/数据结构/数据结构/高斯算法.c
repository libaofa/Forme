#include <stdio.h>
#include <time.h>

#define MAX 1000

int main()
{
	int i = 0;
	long sum = 0;
	printf("MAX: %d", MAX);
	printf("��ͨ�㷨:\n");
	for (i = 1; i <= MAX; i++)
	{
		sum += i;
	}
	printf("�ͣ� %ld\n", sum);
	printf("��˹�㷨:\n");
	sum = (1 + MAX)*MAX / 2;
	printf("�ͣ� %ld\n", sum);

	return 0;
}