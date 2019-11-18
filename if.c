#include <stdio.h>
#include <stdlib.h>

int main1()
{
	/*
	***
	*****
	*******
	*********
	***********
	*************
	***********
	*********
	*******
	*****
	***
	*/
	for (int i = 0; i <= 6; i++)
	{
		for (int j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		putchar('\n');
	}
	for (int i = 5; i >= 0; i--)
	{
		
 		for (int j = 2 * i + 1; j > 0; j--)
		{
			printf("*");
		}
		putchar('\n');
	}

	system("pause");
	return 0;
}