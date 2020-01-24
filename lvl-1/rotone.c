int main(int ac, char**av)
{
    int i = 0;
    int letter;
    if(ac == 2)
    {
        while(av[1][i])
        {
            letter = av[1][i];
            if(av[1][i] >= 'a' && av[1][i] <= 'y')
            letter += 1;
            if(av[1][i] >= 'A' && av[1][i] <= 'Y')
            letter += 1;
            else if(av[1][i] == 'z' || av[1][i] == 'Z')
            letter -=25;
            write(1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
}