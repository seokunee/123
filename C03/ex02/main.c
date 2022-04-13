#include<stdio.h>
#include<string.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char s1[30] = "hello ";
	char s2[] = "world!";
	
	printf("make = %s\n", ft_strcat(s1,s2));

	char s3[30] = "hello ";
	char s4[] = "world!";
	
	printf("real = %s\n", strcat(s3,s4));

	char s5[30] = "";
	char s6[] = "world!!";

	printf("make = %s\n", ft_strcat(s5,s6));

	char s7[30] = "";
	char s8[] = "world!!";

	printf("real = %s\n", strcat(s7,s8));

	return (0);
}
