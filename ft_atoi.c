/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:39:21 by droslyn           #+#    #+#             */
/*   Updated: 2020/10/31 21:39:44 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	unsigned int res;
	int minus;

	res = 0;
	minus = 1;
	if (!str)
		return (0);
	while (*str == ' ')
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
