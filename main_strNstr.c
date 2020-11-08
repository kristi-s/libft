#include <stdio.h>
#include "libft.h"
//char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		main()
{
	/*char str1[30] = "Hello nice pretty world! @#$";
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
	printf("my ptr = %p\n", ptr2)*/

	char *haystack = "MZIRIBMZIRIBMZE123";
	char *needle = "MZIRIBMZE";
	printf("MY = %s\n", ft_strnstr(haystack, needle, 1600));
	printf("STD = %s\n", strnstr(haystack, needle, 1600));

	/*char *str;
  str = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
  printf("1		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
  printf("2		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
  printf("3		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit amet", "", 10);
  printf("4		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
  printf("5		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30);
  printf("6		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
  printf("7		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10);
  printf("8		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
  printf("9		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
  printf("10		:%s\n", str);
  str = ft_strnstr("AAAAA", "AAAAA", 5);
  printf("11		:%s\n", str);
  str = ft_strnstr("AAAAAAAAAAAAA", "AAAAAAAAAAAAA", ft_strlen("AAAAAAAAAAAAA"));
  printf("12		:%s\n", str);
  str = ft_strnstr("A", "A", 2);
  printf("13		:%s\n", str);
  str = ft_strnstr("abcdef", "abcdefghijklmnop", ft_strlen("abcdef"));
  printf("14		:%s\n", str);
  str = ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 30);
  printf("15		:%s\n", str);
  str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);*/

	return 0;
}
