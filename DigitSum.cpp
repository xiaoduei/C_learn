int DigitSum(unsigned int n)
{
	if (!n)
		return 0;
	return (n % 10) + DigitSum(n / 10);
