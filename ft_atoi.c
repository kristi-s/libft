/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:39:21 by droslyn           #+#    #+#             */
/*   Updated: 2020/11/02 22:34:42 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || 
			c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	unsigned int res;
	int minus;

	res = 0;
	minus = 1;
	if (!str)
		return (0);
	while (ft_isspace(*str))
		str++;
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
