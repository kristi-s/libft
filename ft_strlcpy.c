/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:52:58 by droslyn           #+#    #+#             */
/*   Updated: 2020/10/31 21:53:20 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char *src_copy;

	if (!dst || !src)
		return (0);

	src_copy = src;	
	while (dstsize > 1)
	{
		*dst = *src;
		dstsize--;
		dst++;
		src++;
	}
	*dst = '\0';
	return (ft_strlen(src_copy));
}
