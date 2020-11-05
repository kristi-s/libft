#include <stdio.h>
#include "libft.h"
void	ft_putnbr_fd(int n, int fd);

int		main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	ft_putendl_fd("----", 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putendl_fd("----", 1);
	ft_putnbr_fd(0, 1);
	ft_putendl_fd("----", 1);
	ft_putnbr_fd(-2, 1);
	ft_putendl_fd("----", 1);
	ft_putnbr_fd(-123456, 1);
	ft_putendl_fd("----", 1);
	ft_putnbr_fd(1, 1);
	return 0;
}

