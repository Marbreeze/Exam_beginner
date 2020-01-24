int	ft_max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}

int ft_min(int a, int b)
{
	if (a < b)
		return(a);
	return (b);
}

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int t = ft_max(b, c);
	int mx = ft_max(a, t);
	t = ft_min(a, b);
	int mn = ft_min(c, t);
	int sum = a + b + c;
	int middle = sum - mx - mn;
	printf("%d %d %d",mn, middle, mx);
}
