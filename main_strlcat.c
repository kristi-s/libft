/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:29:03 by droslyn           #+#    #+#             */
/*   Updated: 2020/10/31 19:41:41 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		main()
{
	char str_dst1[12] = "Hello";
	char str_src1[6] = "world";
	char str_dst2[12] = "Hello";
	char str_src2[6] = "world";
	size_t	len1, len2;

	len1 = strlcat(str_dst1, str_src1, 3);
	printf("len1 = %zu, dst1 = %s\n", len1, str_dst1);
	len2 = ft_strlcat(str_dst2, str_src2, 3);

	printf("len2 = %zu, dst2 = %s\n", len2, str_dst2);
	return (0);
	
}
