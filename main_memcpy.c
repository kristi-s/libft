#include <string.h>
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n);

int		main()
{
	char str1[11] = "0123456789";
	char str2[11] = "0123456789";
	char st1[4] = "abc";
	char st2[4] = "abc";

	printf("std str = %s\n", memcpy(str1, st1, 3));
	printf("my str = %s\n", ft_memcpy(str2, st2, 3));
	printf("std str = %s\n", memcpy(str1, st1, 4));
	printf("my str = %s\n", ft_memcpy(str2, st2, 4));
	return 0;
}
