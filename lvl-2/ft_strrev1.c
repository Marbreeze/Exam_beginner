#include <string.h>
void ft_swap(char *a, char *b)
{
	char c;
	c = *a;
	*a = *b;
	*b = c;
}
char *ft_strrev(char *str)
{
	int i = 0;
	int len = strlen(str);
	len--;
	while(str[i] < str[len])
	{
		ft_swap(&str[i], &str[len]);
		i++;
		len--;
	}
	return (str);

}
int main()
{
	char str[10] = "h n m o p";
	printf("%s\n", ft_strrev(str));
}
