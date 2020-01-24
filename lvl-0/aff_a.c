int main(int ac, char **av)
{
  int  i = 0;
  int flag = 0;
  if(ac == 1)
    {
        write(1, "a", 1);
        return 0;
    }
      while(av[1][i] != '\0')
      {
          flag = 0;
          if(av[1][i] == 'a')
          {
              flag = 1;
              break;
          }
          i++;
      }
      if(flag == 1)
          write(1, &av[1][i], 1);
      else if(flag == 0)
          write(1, "\n", 1);
}
//  #include <unistd.h>

// int     main(int ac, char**av)
// {
//     int i = 0;
//     if(ac != 1) 
//     {
//         write(1, "a\n", 2); 
//         return 0;
//     }
//         while(av[1][i])
//         {
//             if(av[1][i] == 'a')
//                 {
//                     write(1, "a", 1);
//                     break;
//                 }
//             i++;
//         }
//         write(1, "\n", 1);
// }

