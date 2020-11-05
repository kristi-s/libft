#include <stdio.h>
#include <string.h>
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		main()
{
	char *s1 = "\200";
	char *s2 = "\0";
	int res1, res2;

	res1 = strncmp(s1, s2, 1);
	res2 = ft_strncmp(s1, s2, 1);

	printf("std strncmp = %d	my = %d\n", res1, res2);
	
/*	res1 = strncmp(str1, str2, 7);
	res2 = ft_strncmp(str1, str2, 7);

	printf("std strncmp = %d	my = %d\n", res1, res2);*/
	return 0;
}
