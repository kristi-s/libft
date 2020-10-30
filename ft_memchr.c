#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s || n == 0)
		return (0);

	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		if (*(unsigned char *)(s + i) == '\0')
			return (0);
		i++;
	}
	return (0);
}
