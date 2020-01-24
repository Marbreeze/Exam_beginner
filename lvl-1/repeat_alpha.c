int main(int ac, char **av)
{
	int i = 0;
	int n = 0;
	if(ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
		while(av[1][i] != '\0')
		{
			n = 0;
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				n  = av[1][i] - 'a' + 1; // what ever leter is coming - 'a' its gonna give you the posion of previos leter + 1 is gonna 
										//give u the posion of acutal leter that comming in;
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				n  = av[1][i] - 'A' + 1;
			}
			while(n-- > 0) //n in the position of the leter saved is decrement
			{
				write(1, &av[1][i], 1); //write each leter as it decrements depending of how much is your count;
			}
			i++; //move to next leter
		}
}
