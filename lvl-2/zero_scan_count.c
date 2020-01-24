int main()
{
	int a;
	int i = 1;
	int cnt = 0;
	int b;
	scanf("%d",&a); //avem un nr care vn de la user
	while(i <= a)//pina cind index < a
	{
		scanf("%d", &b); // introdu atitea nr cu cat este egal a daca a= 3 introdu 3 numere
		if(b == 0) //dar incepe numaratoarea daca vezi 0 ca cifra si insus
		{
			cnt++;
		}
		i++;
	}
	printf("%d",cnt);
}
