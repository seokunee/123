#include<stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *strs[6];
	char sep[] = "--";

	char s1[] = "hello";
	char s2[] = "my";
	char s3[] = "name";
	char s4[] = "is";
	char s5[] = "seokhun";
	
	strs[0] = s1;
	strs[1] = s2;
	strs[2] = s3;
	strs[3] = s4;
	strs[4] = s5;
	strs[5] = 0;
	
	printf("%s\n", ft_strjoin(5, strs, sep));
	return (0);
}
