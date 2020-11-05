/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:54:57 by droslyn           #+#    #+#             */
/*   Updated: 2020/10/31 21:55:28 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

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
