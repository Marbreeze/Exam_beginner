int main()
{
	int n;
	scanf("%d", &n);
	printf("%d boch", n);
	if(n == 1)
		printf("ka");
	if(n >= 2 && n <= 4)
		printf("ki");
	else if(n >= 4 && n <= 1000)
		printf("ek");
}
