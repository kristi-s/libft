#include <string.h>
size_t		ft_strlen(const char *s);

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	if (!haystack || !needle)
		return (0);
	if (*needle == '\0')
		return ((char *)haystack);
	while ((*(haystack + i) != '\0') && (i < len))
	{
		while(*(haystack + i) == *(needle + n))
		{	
			if (*(needle + n + 1) == '\0')
				return ((char *)(haystack + i - n));
			n++;
			i++;
			if (*(haystack + i) == '\0')
				return (0);
		}
		n = 0;
		i++;
	}
	return (0);
}
