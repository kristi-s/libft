#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	ft_plustwo(unsigned int n, char c)
{
	if (n % 2 && ft_isprint(c + 2))
		return (c + 2);
	else if (ft_isprint(c + 1))
		return (c + 1);
	else
		return (c);
}

int	main(int argc, char **argv)
{
	char *ptr;

	if(argc == 1)
	{
		printf("no arg\n");
		return (0);
	}
	ptr = ft_strmapi(argv[1], &ft_plustwo);
	printf("str = %s\n", ptr);
	return 0;
}
