int main()
{
	int n;
	int sum = 0;
	scanf("%d", &n); sa da un nr
	while(n != 0)
	{
		sum = sum + (n % 10); //ca sa accesam ultimul cifra din nr  adica riminder 12 va fi 2
							//n inca va ramine 12, 12 / 10 = 1,astfel am accesat ultima cifra si prima
							//adunindule primim suma cifrelor din numar;   ex:123456 % 10 = 6(adica ultima cifra) apoi acelasi nr 
							//apoi acelasi nr 12345 / 10 = 1234,5->am accesat 5,repetam pina cind nu accesam astfel tot si adunam;
		n = n / 10;
	}
	printf("%d", sum);
}
