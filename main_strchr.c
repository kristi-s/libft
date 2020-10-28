#include <string.h>
#include <stdio.h>
char *ft_strchr(const char *s, int c);

int		main()
{
	char str[20] = "Hello world!";
	char c = 'q';
	char *ptr1;
	char *ptr2;

	ptr1 = strchr(str, c);
	ptr2 = ft_strchr(str, c);

	printf("ptr = %p, c = %c\n", ptr1, c);
	printf("my ptr = %p, c = %c\n", ptr2, c);
	return (0);
}
