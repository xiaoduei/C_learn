#include <stdio.h>
#include <stdlib.h>

// 1. 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
int main()
{
	int sum = 0, empty_bottle = 0, soda = 30, rest_bottle = 0;
	while (soda) {
		sum += soda;
		empty_bottle = soda + rest_bottle;
		rest_bottle = empty_bottle % 2;
 	  soda = empty_bottle / 2;
		if (soda == 1 && rest_bottle == 0) {
			sum += 1;
			break;
		}
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
