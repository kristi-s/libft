#include <string.h>
#include <stdio.h>
char *ft_strrchr(const char *s, int c);

int		main()
{
/*	char str[20] = "Hello world!";
	char c = 'l';
	char *ptr1;
	char *ptr2;
	char *ptr3;

	ptr1 = strchr(str, c);
	ptr2 = ft_strrchr(str, c);
	ptr3 = strrchr(str, c);

	printf("1st ptr = %p, c = %c\n", ptr1, c);
	printf("my ptr = %p, c = %c\n", ptr2, c);
	printf("last std ptr = %p, c = %c\n", ptr3, c);*/

	char *src = "Ä«ÅËËËÂ¯ËÂ¸Â¯.ÅÂ«ââââ¢Âªâ¢Â¡Â¶Â¢ËË";
	char *d1 = strrchr(src, L'â');
	char *d2 = ft_strrchr(src, L'â');

	printf("std ptr = %p\n", d1);
	printf("my ptr = %p\n", d2);

	return (0);
}
