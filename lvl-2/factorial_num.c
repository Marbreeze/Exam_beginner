int main()
{
	int i = 1;
	int n;
	int factorial = 1;
	scanf("%d",&n);
	//if (n < 0)
	while(i <= n) //start from 1 is 0 * something is going to give u 0 :D, until u get to thet num 
	{			//inmulteste num precedent(i) cu res(factorial) si salvez tot in factorial
		factorial = factorial * i;
		i++; 
	}
	printf("%d",factorial);
}
//1 = 1 * 1 //increment i
//2 = 1 * 2//i++
//6 = 2(factorial takes the previous res) * 3
//24 = 6 * 4
//120 =24 * 5
//720 = 120 * 6 until u get to the factorial of num 10 for ex
