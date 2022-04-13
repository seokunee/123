#include<stdio.h>
int ft_str_is_numeric(char *str);
int	main(void)
{
	char str[] = "dsdsfadf";
	char str1[] = "1212343";
	char str2[] = "23df1332";

	int	a;
	int b;
	int c;

	a = ft_str_is_numeric(str);
	b = ft_str_is_numeric(str1);
	c = ft_str_is_numeric(str2);

	printf("%d, %d , %d", a, b, c);
	return (0);
}
