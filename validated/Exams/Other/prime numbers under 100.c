int main()
{
	int n = 100; //hada howa nombre lli scaniti

	int i = 2;
	int j;
	int k = 1;
	while (i <= n)
	{
		k = 1;
		j = 2;
		while (j < i)
		{
			if (i % j == 0)
				k = 0;
			j++;
		}
		if (k == 1)
			printf("%d ,",i);
		i++;
	}
	return (0);
}
