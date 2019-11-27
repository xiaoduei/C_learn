int func_rec(int n, int k)
{
	if (k == 1)
		return n;
	return n * func_rec(n, k - 1);
}
