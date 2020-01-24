int main(int ac, char**av)
{
	int i;
	int j;
	int res = 0;
	int used[128] = {0};//creeam flaguri pt toate elementele din asci code 128 chars

	if(ac == 3)
	{
		while(av[1][i])
		{
			//daca litera asta a fost scrisa deja,si are flg 1 ea in if nu va intra,
			if(used[(int)av[1][i]] == 0) //creeam masiv care e plin flaguri de 0 dar care are salvat int val of  each element in ascii 
			{//de ex am litera p in ascii va fi 112 daca se intilneste in al 2 str si este scos ca output, sau nu este gasit ceea, ce inseamna ca a trecut print string2 si  la verificat ,flagul in masiv sub litera p este 1
				//char daca incriment i din primul str si peste citeva litere am p din nou el acolo nu va mai verifica din nou al 2-lea str fiidca deja flagul 1 e pus ceea 
				//ce inseamna ca el a fost verificat o data
				j = 0;
				while(av[2][j] && av[1][i] != av[2][j])//pina cind am al 2-lea str si prima litera din prim str != cu al2lea
				{
					j++; // incrimenteaza index la al2lea str ca sa verifici cu tot string
				}
				if(av[1][i] == av[2][j])
				{
					write(1, &av[1][i], 1);
				}
				used[(int)av[1][i]] = 1;
			}
			i++; //daca ai gasit incrimenteaza , daca nu ai gasit tot incrimeanteaza si veridica al 2lea litera din primul str
		}
	}
	write(1, "\n", 1);
}
