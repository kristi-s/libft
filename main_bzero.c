#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int		main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("no 2 arg\n");
		return 0;
	}
	int len1 = 0;
	int len2 = 0;

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	bzero(argv[1], len1);
	int i1 = 0;
	int i2 = 0;
	while (i1 < len1)
	{
		if (argv[1][i1] != '\0')
		{
			printf("KO\n");
			return 0;
		}
		i1++;
	}
	ft_bzero(argv[2], len2);
	while (i2 < len2)
	{
		if (argv[2][i2] != '\0')
		{
			printf("KO my fn\n");
			return 0;
		}
		i2++;
	}
	printf("Ok\n");
	return 0;
}
