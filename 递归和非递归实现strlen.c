// 递归实现strlen
int func_rec(char * string)
{
	if (!*string)
		return 0;
	return 1 + func_rec(++string);
}

// 非递归实现strlen
int func_nonrec(char * string)
{
	int n = 0;
	while (*string)
	{
		n++;
		string++;
	}
	return n;
}
