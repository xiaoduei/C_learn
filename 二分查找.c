int search(int arr[], int size, int target) //arr[] 查找的数组, size 数组的大小, target 查找的数
{
	int l = 0, h = size - 1;
	int m = 0;
	while (l <= h)
	{
		m = (l + h) / 2;
		if (arr[m] > target)
			h = m - 1;
		else if (arr[m] < target)
			l = m + 1;
		else
			return m;
	}
	return -1;
}
