#include <string.h>
size_t		ft_strlen(const char *s);

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len_src;
	size_t len_dst;

	if(!dst || !src)
		return (0);

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	dst = dst + len_dst;
	dstsize = dstsize - len_dst;
	while (dstsize > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	return (len_src + len_dst);
}
