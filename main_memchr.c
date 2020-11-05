#include <string.h>
#include <stdio.h>
char *ft_memchr(const char *s, int c, size_t n);

int		main()
{
	char str[20] = "Hello world!";
	int c = 111;
	char *ptr1;
	char *ptr2;
	char *ptr3;
	char *ptr4;
	char *ptr5;
	char *ptr6;

	ptr1 = memchr(str, c, 12);
	ptr2 = ft_memchr(str, c, 12);
	printf("ptr = %p, c = %c\n", ptr1, c);
	printf("my ptr = %p, c = %c\n", ptr2, c);
	
	c = 43;
	ptr3 = memchr(str, c, 12);
	ptr4 = ft_memchr(str, c, 12);

	printf("ptr = %p, c = %c\n", ptr3, c);
	printf("my ptr = %p, c = %c\n", ptr4, c);
	
	ptr5 = memchr(str, c, 22);
	ptr6 = ft_memchr(str, c, 22);

	printf("ptr = %p, c = %c\n", ptr5, c);
	printf("my ptr = %p, c = %c\n", ptr6, c);
	return (0);
}
