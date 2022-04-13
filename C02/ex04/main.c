#include<stdio.h>
int ft_str_is_lowercase(char *str);
int	main(void)
{
	char str[] = "dsdsfadf";
	char str1[] = "AdfkenB";
	char str2[] = "23df1332";

	int	a;
	int b;
	int c;

	a = ft_str_is_lowercase(str);
	b = ft_str_is_lowercase(str1);
	c = ft_str_is_lowercase(str2);

	printf("%d, %d , %d", a, b, c);
	return (0);
}
