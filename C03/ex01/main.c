#include<stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "hello";
	char s2[] = "hewwo";

	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));

	char s7[] = "hello";
	char s8[] = "hewwo";

	printf("%d\n", ft_strncmp(s7, s8, 2));
	printf("%d\n", strncmp(s7, s8, 2));

	char s3[] = "hello";
	char s4[] = "";

	printf("%d\n", ft_strncmp(s3, s4, 4));
	printf("%d\n", strncmp(s3, s4, 4));

	char s5[] = "hello";
	char s6[] = "hewwo";

	printf("%d\n", ft_strncmp(s5, s6, 2));
	printf("%d\n", strncmp(s5, s6, 2));
	
	char s9[] = "hello";
	char s0[] = "hewwo";

	printf("%d\n", ft_strncmp(s9,s0, 3));
	printf("%d\n", strncmp(s9, s0, 3));
	return (0);
}
