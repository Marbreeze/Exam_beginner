#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int res = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			res = 1;
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				res = av[1][i] - 'a' + 1;
			}
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				res = av[1][i] - 'A' + 1;
			}
			while(res-- > 0)
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
}

