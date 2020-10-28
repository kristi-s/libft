#include <stdio.h>

int		ft_isprint(int c);

int		main()
{
	unsigned char ch;
	ch = '}';
	printf("%c isprint ? %d\n", ch, ft_isprint(ch));
	ch++;
	printf("%c isprint ? %d\n", ch, ft_isprint(ch));
	ch++;
	printf("%c isprint ? %d\n", ch, ft_isprint(ch));
	return (0);
}
