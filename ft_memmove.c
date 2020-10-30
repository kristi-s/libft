#include <string.h>
void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst || !src || len == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		while(len)
		{
			len--;	
			*((char *)(dst + len)) = *((char *)(src + len));
		}
		return (dst);
	}
}
