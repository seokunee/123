void ft_ultimate_div_mod(int *a, int *b);
#include<stdio.h>

int main(void)
{
	int	div;
	int	mod;

	div = 23;
	mod = 3;
	ft_ultimate_div_mod(&div, &mod);
	printf("div = %d, mod = %d", div, mod);
	return (0);
}
