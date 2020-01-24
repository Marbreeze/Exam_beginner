int main()
{
	int i = 1;
	int n;
	int res = 1;
	scanf("%d", &n);
	while(i <= n)
	{
		res = 2 * res;
		i++;
	}
	printf("%d", res);
}
