#include <string.h>
#include <stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len);

int		main()
{
	char str1[11] = "0123456789";
	char str2[11] = "0123456789";
//	char st1[4] = "abc";
//	char st2[4] = "abc";

	printf("std dst = %s str = %s\n", memmove(&str1[3], str1, 4), str1);
	printf("my dst = %s str = %s\n", ft_memmove(&str2[3], str2, 4), str2);
//	printf("std str = %s\n", memcpy(str1, st1, 4));
//	printf("my str = %s\n", ft_memcpy(str2, st2, 4));
	return 0;
}
