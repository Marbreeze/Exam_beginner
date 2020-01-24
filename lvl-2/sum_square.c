int main()
{
	//couta suma la patrat ^2 + ^2 +...^n;
	//n este input de la user;
	//patrat este num * num;
	int i = 1;
	int res = 0;
	int n = 1;
	scanf("%d",&n);
	while(i <= n)
	{
		res = res + (i * i); // in res  pina  = salvam suma in res + salveaza resultatul precedent  
		i++;
	}
	printf("%d", res);
	return 0;
}
