/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:52:15 by droslyn           #+#    #+#             */
/*   Updated: 2020/10/31 21:52:43 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len_src;
	size_t len_dst;

	if(!dst || !src)
		return (0);

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (len_dst > dstsize)
		len_dst = dstsize;
	dst = dst + len_dst;
	dstsize = dstsize - len_dst;
	if (dstsize - 1 > 0)
		return (len_src + len_dst);
	while (dstsize > 1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (len_src + len_dst);
}
