#include<stdio.h>
#include<string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
int	main(void)
{
	char s1[30] = "hello ";
	char s2[] = "world!";

	printf("make = %s\n", ft_strncat(s1,s2,3));

	char s3[30] = "hello ";
	char s4[] = "world!";

	printf("real = %s\n", strncat(s3,s4,3));

	char s5[30] = "";
	char s6[] = "world!!";

	printf("make = %s\n", ft_strncat(s5,s6,4));

	char s7[30] = "";
	char s8[] = "world!!";

	printf("real = %s\n", strncat(s7,s8,4));

	return (0);
}
