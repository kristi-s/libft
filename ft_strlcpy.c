#include <string.h>
size_t		ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char *src_copy;

	if (!dst || !src)
		return (0);

	src_copy = src;	
	while (dstsize > 1)
	{
		*dst = *src;
		dstsize--;
		dst++;
		src++;
	}
	*dst = '\0';
	return (ft_strlen(src_copy));
}
