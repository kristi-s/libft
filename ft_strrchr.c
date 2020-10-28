#include <string.h>
size_t		ft_strlen(const char *s);

char *ft_strrchr(const char *s, int c)
{
	size_t len;

	if (!s)
		return (0);
	len = ft_strlen(s) + 1;
	while (len >= 0)
	{
		if (*(s + len) == c + '\0')
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
