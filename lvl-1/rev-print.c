 #include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
 int main(int ac, char**av)
 {
     int n;
     if(ac == 2)
    {
        n = ft_strlen(av[1]);
         while(n)
         {
             write(1, &av[1][--n], 1);
         }
    }
     write(1, "\n", 1);
     
     return 0;
 }




// #include <unistd.h>

// int ft_strlen(char *str)
// {
//     int i = 0;
//     while(str[i])
//     {
//         i++;
//     }
//     return i;
// }

// int main(int ac, char**av)
// {
//     int len = 0;
//     if(ac == 2)   //ac == 2
//     {
//         len = ft_strlen(av[1]);
//         while(av[1][--len])
//         {
//             write(1, &av[1][len], 1);

//         }
//     }
//     else
//     write(1, "\n", 1);
// }