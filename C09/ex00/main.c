#include <stdio.h>
int	ft_strlen(char *str);
int	main(void)
{
	int	len;

	len = ft_strlen("hello");
	printf("%d\n", len);
	return (0);
}
