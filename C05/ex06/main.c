#include<stdio.h>
int ft_is_prime(int nb);
int	main(void)
{
	printf("----ex06----\n");
	printf("1 : %d\n", ft_is_prime(2147483647));
	printf("0 : %d\n", ft_is_prime(0));
	printf("0 : %d\n", ft_is_prime(1));
	printf("0 : %d\n", ft_is_prime(-1));
	printf("1 : %d\n", ft_is_prime(29));
	printf("1 : %d\n", ft_is_prime(11));
}
