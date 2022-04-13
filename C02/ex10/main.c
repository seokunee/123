#include<stdio.h>
#include<string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			src[] = "hello world";
	char			dest[20] = "seok choi fighting";
	char			test[20] = "seok choi fighting";
	unsigned int	i;

	i = ft_strlcpy(dest, src, 3);
	printf("%s\n", dest);
	printf("%d\n", i);
	printf("----------\n");
	i = strlcpy(test, src, 3);
	printf("%s\n", test);
	printf("%d", i);
	return (0);
}
