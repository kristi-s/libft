#include <stdio.h>

int		ft_tolower(int c);

int		main()
{
	unsigned char ch;
	ch = 'A';
	printf("%c tolower %c\n", ch, ft_tolower(ch));
	ch++;
	printf("%c tolower %c\n", ch, ft_tolower(ch));
	ch++;
	printf("%c tolower %c\n", ch, ft_tolower(ch));
	ch = 'u';
	printf("%c tolower %c\n", ch, ft_tolower(ch));
	ch = '&';
	printf("%c tolower %c\n", ch, ft_tolower(ch));
	return (0);
}
