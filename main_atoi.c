#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
//int		ft_atoi(const char *str);

int		main(int argc, char **argv)
{
	int num1, num2;

	if (argc == 1)
	{
		printf("no arg!\n");
		return 0;
	}

	num1 = atoi(argv[1]);
	num2 = ft_atoi(argv[1]);

	printf("std atoi = %d,	my = %d\n", num1, num2);
	return 0;
}
