#include<stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++----+1234383sknef", "0123456 789"));
	
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+1012sknef", "01"));

	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acbca1234383sknef", "abc+-"));

	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acdca1234383sknef", "abcc"));
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acdca1234383sknef", "abc\n"));
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acdca1234383sknef", "ab\tc"));
	printf("%d\n", ft_atoi_base(" \t\n\r\v\f  -++---+acdca1234383sknef", "abc"));
	return (0);
}
