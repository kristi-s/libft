#include <stdlib.h>
void	*ft_memcpy(void	*dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s1);
	if (!(ptr = malloc(len * sizeof(char))))
		return (0);
	ptr = ft_memcpy(ptr, s1, len);
	return (ptr);
}
