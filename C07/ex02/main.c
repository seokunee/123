#include<stdio.h>
#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*arr;
	int size;
	int i;

	i = 0;
	size = ft_ultimate_range(&arr, 1, 3);

	while (i < 2)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
}
