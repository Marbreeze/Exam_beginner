 #include <stdio.h>

int main() // find all the even divisors for x num;
{
	int x;
	int i = 1;
	int cnt = 1;
	scanf("%d", &x); //se da un nr anumit 16
	while(i <= x/2) //daca index <= decat 16/2= 8, la 8 se va opri
	{
		if(x % i == 0) //8 % 1 =0
		{
			cnt++; //count este unu ca el ia val pt ultima cifra  16
		}
		i++;//incepe de jos in sus
	}
	printf("%d ", cnt);
}	
