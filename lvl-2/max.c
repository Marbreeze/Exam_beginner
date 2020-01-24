int max(int *tab, unsigned int len)
{
	int i;
	i = 0;
	int mx = 0; 
	while(i < len)// address to position
	{
		printf("i = %d tab[i] = %d\n", i, tab[i]);
		if(tab[i] > mx)//adress to the value
		{
			mx = tab[i];
		}
		i++;
	}
	return (mx);
}
int main()
{
	int tab[6] = {1,2,9,10,22};
	int len = 5;
	int ans = max(tab, len);
	printf("%d",ans);
}
