#include<unistd.h>

void ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(123141);
	write(1, "\n", 1);
	ft_putnbr(-134534);
	write(1, "\n", 1);
}
