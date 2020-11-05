#include <stdio.h>
#include <string.h>
int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		main()
{
/*	char str1[20] = "Hello world!";
	char str2[6] = "Hello";
	int res1, res2;

	res1 = memcmp(str1, str2, 3);
	res2 = ft_memcmp(str1, str2, 3);

	printf("std memcmp = %d	my = %d\n", res1, res2);
	
	res1 = memcmp(str1, str2, 7);
	res2 = ft_memcmp(str1, str2, 7);

	printf("std memcmp = %d	my = %d\n", res1, res2);*/

	char *s1 = "\xff\xaa\xde\x12";
	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	int res1, res2;

	res1 = memcmp(s1, s2, 4);
	res2 = ft_memcmp(s1, s2, 4);

	printf("std memcmp = %d	my = %d\n", res1, res2);
	return 0;
}
