#include<stdio.h>
int ft_str_is_printable(char *str);
int	main(void)
{
	char str[] = "dsdsfAadf";
	char str1[] = "1 21  sdf 2A343";
	char str2[] = "\t\r\t\v";

	int	a;
	int b;
	int c;

	a = ft_str_is_printable(str);
	b = ft_str_is_printable(str1);
	c = ft_str_is_printable(str2);

	printf("%d, %d , %d", a, b, c);
	return (0);
}
