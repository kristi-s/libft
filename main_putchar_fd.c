#include <stdio.h>
#include "libft.h"
void	ft_putchar_fd(char c, int fd);

int		main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("no arg\n");
		return 0;
	}
	int i = 0;
	while (argv[1][i] != '\0')
	{
		ft_putchar_fd(argv[1][i], 1);
		i++;
	}
	return 0;
}

