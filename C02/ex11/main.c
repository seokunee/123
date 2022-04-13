#include<stdio.h>

void ft_putstr_non_printable(char *str);
int	main(void)
{
	
		char str1[1000] = "Cooucou\ntu vas bien ?";
		char str2[1000] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70};
		char str3[1000] = "\\'/<>!@#$%^&*()_+-=  0.2158\n\tasdf";
		printf("----ex11----\n");
		printf("Before Change\nstr1 : \n%s\nstr2 : \n%s\nstr3 : \n%s\n", str1, str2, str3);
		ft_putstr_non_printable(str1);
		printf("\n");
		ft_putstr_non_printable(str2);
		printf("\n");
		ft_putstr_non_printable(str3);
		printf("\n");
	return (0);
}
