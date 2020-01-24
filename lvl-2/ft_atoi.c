#include <unistd.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
 while(str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
 {
		++i;	 
 }
 if (str[i] == '-' || str[i] == '+')
 {
	 if(str[i] == '-')
	 {
		 sign = -1;
	 }
	 i++;
 }
 while(str[i] <= '9' && str[i] >=  '0')
 {
	 res = res * 10  + str[i] - '0';
	 i++;
 }
 return (sign * res);
}

int main()
{
	printf("%d %d\n", ft_atoi("12345"), atoi("12345"));
}
