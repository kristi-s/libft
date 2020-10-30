#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1);

int	 main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("no arg\n");
		return (0);
	}
	char *ptr1;
	char *ptr2;

	ptr1 = strdup(argv[1]);
	ptr2 = ft_strdup(argv[1]);
	
	if (ptr1 && ptr2)
	{
		printf("STD ptr = %p str = %s\n", ptr1, ptr1);
		printf("MY ptr = %p str = %s\n", ptr2, ptr2);
	}
	else
		printf("std ptr = %p		my ptr = %p", ptr1, ptr2);

	return (0);
}
