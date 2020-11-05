#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("no arg \n");
		return 0;
	}
	printf("substr(3-20) = %s\n", ft_substr(argv[1], 3, 20));
	return 0;
}
