#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
						
int menu()
{
	int choice = 0;
	printf("--------------\n");
	printf("欢迎来到猜数字游戏!\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");	
	printf("请输入你的选择:");
	printf("--------------\n");
	scanf("%d", &choice);
	return choice;
}
void game()
{
	//	生成一个随机数
	int target = rand() % 100 + 1;
	while (1) {
		//	提示用户
		int num = 0;
		printf("请输入你要猜的数字:");
		scanf("%d", &num);
		//	判断
		if (num < target)
		{
			printf("你输入的低了!\n");
		}
		else if (num > target)
		{
			printf("你输入的高了!\n");
		}
		else
		{
			printf("猜对了!!!");
			break;
		}
	}	
}

int main4()
{
	// time()得到一个时间戳
	srand(time(0));
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			game();
		}
		else if (choice == 0)
		{
			printf("游戏结束!Bye!!!\n");
			break;
		}
		else
		{
			printf("你的输入有误.\n");
		}
	}
	return 0;
}
