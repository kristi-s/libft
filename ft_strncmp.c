#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 || !s2)
		return (1);
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0')
	{
		while (*s1 == *s2 && i < n)
		{
			if (i == n - 1)
				return (0);
			s1++;
			s2++;
			if (*s1 == '\0' || *s2 == '\0')
				return (*s1 - *s2);
			i++;
		}
		i = 0; 
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
