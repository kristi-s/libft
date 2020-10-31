/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:56:15 by droslyn           #+#    #+#             */
/*   Updated: 2020/10/31 21:57:02 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

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
