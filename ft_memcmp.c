/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:04:24 by droslyn           #+#    #+#             */
/*   Updated: 2020/10/31 21:47:24 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((i < n) &&
			(*((unsigned char *)(s1 + i)) == *((unsigned char *)(s2 + i))))
	{
		i++;
		if (*((unsigned char *)(s1 + i)) == '\0')
			return (0);
	}
	return 	(*((unsigned char *)(s1 + i)) - *((unsigned char *)(s2 + i)));
}
