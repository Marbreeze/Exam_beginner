#include<unistd.h>

int main(int ac, char**av)
{
	int i = 0;
	char res;
	if(ac == 2)
	{
		while(av[1][i])
		{
			res = av[1][i];
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				res = 'z' - av[1][i] + 'a';
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				res = 'Z' - av[1][i] + 'A';
			}
			i++;
			write(1, &res, 1);	
		}
	}
	write(1, "\n", 1);
}
