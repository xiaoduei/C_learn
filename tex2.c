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
		��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
		���磺2 + 22 + 222 + 2222 + 22222*/
	int x = 0;
	printf("������0-9֮���һ������:");
	scanf("%d", &x);
	printf("��ͽ��Ϊ:%d", Sn(x));
	system("pause");
	return 0;
}

