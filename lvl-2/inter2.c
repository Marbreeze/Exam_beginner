#include<unistd.h>

void    inter(char*a, char *b)
{
    char save[127] = {0};
    int i = 0;

    while(b[i])
    {
        save[(int)(b[i])] = 1;
        i++;
    }
    i = 0;
    while(a[i])
    {
        if((save[(int)(a[i])]) == 1)
        {
            write(1, &a[i], 1);
            save[(int)(a[i])] = 0;
        }
        i++;
    }
    write(1, "\n", 1);
}
int main(int ac, char **av)
{
    if(ac == 3)
    {
        inter(av[1], av[2]);
    }
    write(1, "\n", 1);
}