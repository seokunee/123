#include<stdio.h>
int ft_str_is_alpha(char *str);
int	main(void)
{
	char str[] = "dsdsfadf";
	char str1[] = "12dkls3";
	char str2[] = "";

	int	a;
	int b;
	int c;

	a = ft_str_is_alpha(str);
	b = ft_str_is_alpha(str1);
	c = ft_str_is_alpha(str2);

	printf("%d, %d , %d", a, b, c);
	return (0);
}
