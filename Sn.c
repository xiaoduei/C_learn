#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int Sn(int x) 
{
	int y = 0, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		y =y * 10 + x;
		sum += y;
	}
	return sum;
}

int main()
{
	/*3.
		求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
		例如：2 + 22 + 222 + 2222 + 22222*/
	int x = 0;
	printf("请输入0-9之间的一个数字:");
	scanf("%d", &x);
	printf("求和结果为:%d", Sn(x));
	system("pause");
	return 0;
}

