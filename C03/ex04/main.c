#include<stdio.h>
#include<string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[] = "A Garden Diary H  Hi hiello world forever";
	char	*ptr;

	ptr = ft_strstr(s1, "Hi");
	printf("%s\n", ptr);
	ptr = strstr(s1, "Hi");
	printf("%s\n", ptr);
	return (0);
}
