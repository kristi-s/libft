#include <stdio.h>
#include <string.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		main()
{
	char str1[30] = "Hello nice pretty world! @#$";
	char str2[6] = "world";
	char *ptr1;
	char *ptr2;

	ptr1 = strnstr(str1, str2, 5);
	ptr2 = ft_strnstr(str1, str2, 5);

	printf("str ptr = %p\n", ptr1);
	printf("my ptr = %p\n", ptr2);
	
	ptr1 = strnstr(str1, str2, 15);
	ptr2 = ft_strnstr(str1, str2, 15);

	printf("str ptr = %p\n", ptr1);
	printf("my ptr = %p\n", ptr2);
	return 0;
}
