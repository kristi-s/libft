#include <stdio.h>
#include <string.h>
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		main()
{
	char str1[20] = "Hello world!";
	char str2[6] = "Hello";
	int res1, res2;

	res1 = strncmp(str1, str2, 3);
	res2 = ft_strncmp(str1, str2, 3);

	printf("std strncmp = %d	my = %d\n", res1, res2);
	
	res1 = strncmp(str1, str2, 7);
	res2 = ft_strncmp(str1, str2, 7);

	printf("std strncmp = %d	my = %d\n", res1, res2);
	return 0;
}
