#include <stdlib.h>
void	ft_bzero(void *, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (!(ptr = malloc(count * size)))
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
