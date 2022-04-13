void ft_putnbr(int nb);
#include<stdio.h>

int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);

	printf("\n");
	ft_putnbr(0);

	printf("\n");
	ft_putnbr(-12385182);

	printf("\n");
	ft_putnbr(112924384);
	return (0);
}
