#include<stdio.h>
#include<stdlib.h>

int *ft_range(int min, int max);

int	main(void)
{
	printf("----ex01----\n");
		int	*arr;
		arr = ft_range(-9, 10);
		for(int i=0;i<10-(-9);i++)
			printf("%d ",arr[i]);
		printf("\n");
		free(arr);
		arr = ft_range(1, 1);
		printf("%p\n", arr);
		free(arr);
}
