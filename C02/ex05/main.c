#include<stdio.h>
int ft_str_is_uppercase(char *str);
int	main(void)
{
	char str[] = "dsdsfadf";
	char str1[] = "AAAAA";
	char str2[] = "23df 1332";

	int	a;
	int b;
	int c;

	a = ft_str_is_uppercase(str);
	b = ft_str_is_uppercase(str1);
	c = ft_str_is_uppercase(str2);

	printf("%d, %d , %d", a, b, c);
	return (0);
}
