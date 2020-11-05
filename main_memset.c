#include <stdio.h>
#include <string.h>
void	*ft_memset(void *b, int c, size_t len);

int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("no 2 arg\n");
		return 0;
	}

//	char *str = "01234567890123456789";
//	char *str2 = "01234567890123456789";
	char *ptr1;
	char *ptr2;
	int	ch;

	ch = 65;
	ptr1 = memset(argv[1], ch, 10);
	ptr2 = ft_memset(argv[2], ch, 10);
	
	printf("std memset = %s\n", ptr1);
	printf("my  memset = %s\n", ptr2);
	return 0;
}
