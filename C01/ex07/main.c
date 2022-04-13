#include<stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int arr[7] = {1,2,3,4,5,6,7};
	int	len = 7;
	int	i = 0;
	ft_rev_int_tab(arr, len);
	while (i < len)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}
