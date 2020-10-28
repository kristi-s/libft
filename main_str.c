#include <stdio.h>

size_t		ft_strlen(const char *s);

int		main(int argc, char **argv)
{
	if (argc == 1)
		printf("NO ARG\n");
	else 
		printf("len = %zu\n", ft_strlen(argv[1]));
	return (0);
}
