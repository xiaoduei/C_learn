void sign_in(int password)  // 待猜密码
{
	int in_password = 0, i = 0;
	scanf("请输入密码:%d", &in_password);
	while (i < 3)
	{
		scanf("%d", &in_password);
		if (in_password == password)
		{
			printf("登录成功\n");
			break;
		}		
		else
			printf("密码错误,请重新输入, (你还有%d次机会):", 3 - i - 1);
		i++;
	}		
}
