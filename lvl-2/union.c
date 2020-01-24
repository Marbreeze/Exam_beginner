int main(int ac, char**av)
{
	int i = 0;
	int used[128] = {0};
	if(ac == 3)
	{
		while(av[1][i])
		{
			if(used[(int)(av[1][i])] == 0)
			{
				write(1, &av[1][i], 1);
				used[(int)(av[1][i])] = 1;
				i++;
			}
			else
				i++;
		}
		i = 0;
		while(av[2][i])
		{
			if(used[(int)(av[2][i])] == 0)
			{
				write(1, &av[2][i], 1);
				used[(int)(av[2][i])] = 1;
				i++;
			}
			else
				i++;
		}
	}
	write(1, "\n", 1);
}
