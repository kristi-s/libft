#include <stdio.h>
#include "libft.h"

char	**ft_split(char const *s, char c);

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		char	**arr;
		int		j = 0;
		arr = ft_split(argv[1], argv[2][0]);
		while (arr[j])
		{
			printf("arr[%d] = %s\n", j, arr[j]);
			j++;
		}
		return (0);
	}
	char	**ptr;
	char	*str1 = "   Hello   world  ";
	char	ch = ' ';
	char	*str2 = " ";
	char	*str3 = "";
	char	*str4 = "qwerty";
	int		i = 0;

	ptr = ft_split(str1, ch);
	if (ptr != 0)
	{
		while (ptr[i])
		{
			printf("ptr[%d] = %s\n", i, ptr[i]);
			i++;
		}
		free (ptr);
		ptr = 0;
		i = 0;
	}

	ptr = ft_split(str2, ch);
	if (ptr != 0)
	{
		while (ptr[i])
		{
			printf("ptr[%d] = %s\n", i, ptr[i]);
			i++;
		}
		free (ptr);
		ptr = 0;
		i = 0;
	}

	ptr = ft_split(str3, ch);
	if (ptr != 0)
	{
		while (ptr[i])
		{
			printf("ptr[%d] = %s\n", i, ptr[i]);
			i++;
		}
		free (ptr);
		ptr = 0;
		i = 0;
	}

	ptr = ft_split(str4, ch);
	if (ptr != 0)
	{
		while (ptr[i])
		{
			printf("ptr[%d] = %s\n", i, ptr[i]);
			i++;
		}
		free (ptr);
		ptr = 0;
		i = 0;
	}
	return 0;
}
