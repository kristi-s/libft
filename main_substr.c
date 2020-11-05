#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		main(int argc, char **argv)
{
	char *ptr;
	if(argc == 1)
	{
		printf("no arg \n");
		return 0;
	}
	ptr = ft_substr(argv[1], 0, 0);
	printf("substr(3-20) = %s\n", ptr);
	if (*ptr == '\0')
		printf("ptr empty str\n");
	return 0;
}
