#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("no arg \n");
		return 0;
	}
	printf("strjoin= %s\n", ft_strjoin(argv[1], argv[2]));
	return 0;
}
