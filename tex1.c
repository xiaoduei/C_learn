#include "stdio.h"

int main2()
{
	// ��0-999��ˮ�ɻ���
	printf("0-999�ڵ�ˮ�ɻ���:\n");
	for (int i = 0; i < 1000; i++)
	{
		int y = 0, sum = 0,temp = i;
		while (temp > 0)
		{
			y = temp % 10;
			sum = sum + y * y * y;
			temp = temp / 10;
		}
		
		if (i == sum) {
			printf("%d\n", i);
		}
	}
	getchar();
	return 0;
}
