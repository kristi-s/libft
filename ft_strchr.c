char *ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c + '\0')
			return ((char *)s);
		s++;
	}
	if (*s == c + '\0')
		return ((char *)s);
	return (0);
}
