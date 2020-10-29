#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr_src;
	size_t			i;

	ptr_src = (unsigned char *)src;
	i = 0;
	if (!dst || !src)
		return (0);
	while (i < n)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		if (*((unsigned char *)(src + i)) == c + '\0')
			return (dst + i + 1);
		i++;
	}
	return (0);
}
