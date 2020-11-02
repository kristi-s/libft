#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int		main(int argc, char **argv)
{
	char *ptr;

	if (argc == 1)
	{
		printf("no arg\n");
		return 0;
	}
	if(!(ptr = ft_strtrim(argv[1], "aeo")))
		return (0);
	printf("ft_strtrim = %s\n", ptr);
	return (0);
}
