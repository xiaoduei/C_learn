void mul(int x)		//1.输出乘法口诀表 x:乘法口诀表的行数和列数
{
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%dx%d=%d\t", j, i, i*j);
		}
		putchar('\n');
	}
}

void swap(int* x, int* y)   //2.交换x和y这两个数
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

int IsLeapYear(int x)   //3.判断x是否是闰年
{
	if (x % 100 != 0 && x % 4 == 0 || x % 400 == 0)
		return 1;
	else
		return 0;
}

// 4.1数组的初始化,成功返回1,否则返回0
int init(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if(!scanf("%d", (arr + i)))
			return 0;
	}
	return 1;
}

// 4.2清空数组,成功清空返回1,否则返回0
int empty(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) = 0)
			return 0;
	}
	return 1;
}

// 4.3数组元素的逆置,成功返回1,否则返回0
void reverse(int arr[], int size)
{
	int i = 0;
	while (i < size/2)
	{
		arr[i] = arr[i] + arr[size - i - 1];
		arr[size - i - 1] = arr[i] - arr[size - i - 1];
		arr[i] = arr[i] - arr[size - i - 1];	
		i++;
	}
}

_Bool IsPrime_num(int x)    // 5.判断x是否是素数.
{
	if (x == 1) return 0;
	for (int i = 2; i < sqrt(x)+1; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
