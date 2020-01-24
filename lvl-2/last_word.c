#include <string.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int n = strlen(av[1]);
	n--;
	while(av[1][n] == ' ' || av[1][n] == '\t')
		--n;
	i = 0;
	while(av[1][n] != ' ' && av[1][n] != '\t' && av[1][n] != '\0')
	{
		n--;
	}
	while(n++)
	{
		if(!av[1][n] || av[1][n] == ' ' || av[1][n] == '\t')
			break;
		write(1, &av[1][n], 1);
		
	}
}
