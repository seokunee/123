#include<stdio.h>
#include<string.h>


int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "hello";
	char s2[] = "hewwo";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));

	char s3[] = "hello";
	char s4[] = "";

	printf("%d\n", ft_strcmp(s3, s4));
	printf("%d\n", strcmp(s3, s4));
		
	char s5[] = "";
	char s6[] = "hewwo";

	printf("%d\n", ft_strcmp(s5, s6));
	printf("%d\n", strcmp(s5, s6));
	
	char s7[] = "hello";
	char s8[] = "hello";

	printf("%d\n", ft_strcmp(s7, s8));
	printf("%d\n", strcmp(s7, s8));
	return (0);
}
