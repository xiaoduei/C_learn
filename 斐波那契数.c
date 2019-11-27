// 递归实现斐波那契数
int Fib_rec(int n)
{
	if (n == 1)
		return 1;
	return n * Fib_rec(n - 1);
}

// 非递归实现斐波那契数
int Fib_nonrec(int n)
{
	int y = 1;
	for (int i = 1; i <= n; i++)
	{
		y *= i;
	}
	return y;
}
