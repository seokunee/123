void ft_is_negative(int n);

#include<unistd.h>

int	main(void)
{
	ft_is_negative(1);
	write(1, "\n", 1);	
	ft_is_negative(0);
	write(1, "\n", 1);	
	ft_is_negative(-1);
}
