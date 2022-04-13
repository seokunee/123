#include<stdio.h>

void ft_sort_int_tab(int *tab, int size);
int	main(void)
{
	int arr[7] = {3,4,1,2,7,6,5};
	int	len = 7;
	int	i = 0;
	ft_sort_int_tab(arr, len);
	while (i < len)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}
