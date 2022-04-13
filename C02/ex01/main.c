#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);
int	main(void)
{
	char dest[6];
	char src[6] = "hello";

	printf("%s", ft_strncpy(dest, src,6));
	return (0);
}
