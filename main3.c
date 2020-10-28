#include <stdio.h>
int		ft_toupper(int c);

int		main()
{
	unsigned char ch;
	ch = 'a';
	printf("%c toupper %c\n", ch, ft_toupper(ch));
	ch++;
	printf("%c toupper %c\n", ch, ft_toupper(ch));
	ch++;
	printf("%c toupper %c\n", ch, ft_toupper(ch));
	ch = '+';
	printf("%c toupper %c\n", ch, ft_toupper(ch));
	ch = 'Q';
	printf("%c toupper %c\n", ch, ft_toupper(ch));
	return (0);
}
