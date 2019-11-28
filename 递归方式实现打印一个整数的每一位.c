int func_rec(int n)
{
	if (n)
	{
		printf("%d\t", n % 10);
		return func_rec(n / 10);
	}
  return 0;
}
