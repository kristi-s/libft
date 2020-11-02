/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:56:15 by droslyn           #+#    #+#             */
/*   Updated: 2020/11/02 22:16:32 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char *ft_strrchr(const char *s, int c)
{
	size_t len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	if (len == 0)
		return 0;
	len--;
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
