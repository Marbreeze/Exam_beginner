int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		
	}
	return(i);
}


int main(int ac, char**av)
{
	int i = 0;
	int n = 0;
	int flag = 0;

	if (ac == 3)
	{
		while(av[1][i])
		{
			flag = 0;
			while(av[2][n])
			{
				if(av[1][i] == av[2][n]) //daca litara din prim = liter din al 2
				{
					flag = 1;
					n++; //move to next leter //acest incrementare lukreaza numai daca sunt egale
					break;
				}
				else //daca ele nu sunt egale atunci incriment
					n++;
			}
			if(flag == 0) //daca litera din prim si din al 2 nu este egala atunci flag ramine 0
			{
				break; 
			}
			i++; //incrimenteaza primul string
			
		}
		if (av[1][i] == '\0')	// ca sa aflam daca suntem la sfirssit de prim str si toate litere din primul string leam gasit in al 2
		//atunci scriem tot primul str //daca nu am ajuns pina la sfirsit inseamna ca nua ma gasit primu str in al-2lea 
		{
			write(1, av[1],ft_strlen(av[1]));
			
		}
	}
	write(1, "\n", 1);
}
