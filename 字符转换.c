void s_gets()
{
	char ch = ' ';
	while (1)
	{
		ch = getchar();
		if (ch >= 'a' && ch <= 'z')
			printf("你输入的是小写字符,转为大写字符为:%c\n", ch - 32);
		else if (ch >= 'A' && ch <= 'Z')
			printf("你输入的是大写字符,转为小写字符为:%c\n", ch + 32);
		else
			continue;
	}
}
