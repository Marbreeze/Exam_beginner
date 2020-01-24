int main()
{
	int a;
	int b;
	int c;
	int even = 0;
	int odd = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
		even = 1;
	if(a % 2 != 0 || b % 2 != 0 || c % 2 != 0)
		odd = 1;
	if (even == 1 && odd == 1)
		printf("YES");
	else
	   printf("NO");	
}
