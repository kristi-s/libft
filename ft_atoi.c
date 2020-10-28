int		ft_atoi(const char *str)
{
	unsigned int res;
	int minus;

	res = 0;
	minus = 1;
	if (!str)
		return (0);
	if (*str == '-')
	{
		minus = -minus;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (minus * res);
}
