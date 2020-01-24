int main()
{
	int a;
	int b;
	int x = -1000;
	scanf("%d %d", &a, &b);
	if (a == 0 && b == 0)
	{
		printf("INF");
		return (0);
	}
	if (-b % a == 0)
		printf("%d", -b / a);
	else
		printf("NO");
}
