char	*ft_strcpy(char *dst, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}

int main()
{
	char src[20] = "marina";
	char dst[20] = "says thank you";
	char *a = ft_strcpy(dst, src);
	printf("%s\n", a);
}
