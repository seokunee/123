#include<string.h>
#include<stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[20] = "12345";
	char src[] = "678";

	printf("%lu\n", strlcat(dest, src, 3));
	printf("%s\n", dest);

	char dest1[20] = "12345";
	char src1[] = "678";

	printf("%lu\n", strlcat(dest1, src1, 5));
	printf("%s\n", dest1);

	char dest2[20] = "12345";
	char src2[] = "678";

	printf("%lu\n", strlcat(dest2, src2, 7));
	printf("%s\n", dest2);

	char dest3[30] = "12345";
	char src3[] = "67890";

	printf("%lu\n", strlcat(dest3, src3, 20));
	printf("%s\n", dest3);


	printf("-----------------------\n");
	//----------------------------------------
	
	char dest4[20] = "12345";
	char src4[] = "678";

	printf("%u\n", ft_strlcat(dest4, src4, 3));
	printf("%s\n", dest4);

	char dest5[20] = "12345";
	char src5[] = "678";

	printf("%u\n", ft_strlcat(dest5, src5, 5));
	printf("%s\n", dest5);

	char dest6[20] = "12345";
	char src6[] = "678";

	printf("%u\n", ft_strlcat(dest6, src6, 7));
	printf("%s\n", dest6);

	char dest7[30] = "12345";
	char src7[] = "67890";

	printf("%u\n", ft_strlcat(dest7, src7, 20));
	printf("%s\n", dest7);




		
	return (0);
}
