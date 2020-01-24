int main()
{
	int x;
	int i = 1;
	scanf("%d", &x);
	while(x >= i)
	{
		if(x % i == 0)
		{
			printf("%d ", i);
		}
		i++;
	}
}
