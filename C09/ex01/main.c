#include "includes/ft.h"
#include <stdio.h>

int main()
{
	int a = 4;
	int b = 2;
	ft_swap(&a, &b);

	printf("%d %d\n", a, b);
	return 0;
}
