#include<stdio.h>
char *ft_strcapitalize(char *str);
int	main(void)
{
	char	str[] = "salut, coMMent tu vas ? 42mots quaN-- \tnte-deux; cinquante+et+un";
	
	printf("%s", ft_strcapitalize(str));
	return (0);
}
