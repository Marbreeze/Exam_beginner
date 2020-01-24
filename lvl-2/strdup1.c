#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}



char *ft_strdup(char *src)
{
	int i = 0;
	char *temp;
	if(src == NULL)
		return(NULL);
	temp = (char *) malloc(sizeof(char) * ft_strlen(src));
	while(src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return(temp);
}
int main()
{
	char s[20] = "marina";
	printf("%s\n %s\n", ft_strdup(s), strdup(s));
}
