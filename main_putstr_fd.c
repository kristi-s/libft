#include <stdio.h>
#include "libft.h"
void	ft_putstr_fd(char *s, int fd);

int		main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("no arg\n");
		return 0;
	}
	ft_putstr_fd(argv[1], 1);
	return 0;
}

