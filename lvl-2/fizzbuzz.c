#include <unistd.h>

void ft_putnbr(int n)
{
    unsigned int num;
    char c;
    if(n < 0)
    {
        write(1, "-", 1);
        num = (-1) * n;

    }
    else
    {
        num = n;
        if(num > 9)
            ft_putnbr(num / 10);
        c = num % 10 + '0';
        write(1, &c, 1);
        
    }
    

}
int main()
{
    int i = 1;
    while(i<=100)
    {
        if(i % 3 == 0)
        {
            write(1, "fizz\n", 5);
        }
        else if(i % 5 == 0)
        {
            write(1, "buzz\n", 5);
        }
        else if(i % 15 == 0)
        {
            write(1, "fizzbuzz\n", 9);
        }
        else
        {
            ft_putnbr(i);
            write(1, "\n", 1);
        }
            i++;
    }
}