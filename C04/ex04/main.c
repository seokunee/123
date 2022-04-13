#include<stdio.h>

void ft_putnbr_base(int nbr, char *base);
int	main(void)
{
	ft_putnbr_base(-2147483648, "9876543210");
	printf("\n");
	ft_putnbr_base(15, "011");

	printf("\n");
	ft_putnbr_base(-20, "01+");
	return (0);
}
