/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <droslyn@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 23:02:32 by droslyn           #+#    #+#             */
/*   Updated: 2020/10/31 21:59:26 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main()
{
	printf(" '0' isdigit ? %d\n", ft_isdigit('0'));
	printf(" '9' isdigit ? %d\n", ft_isdigit('9'));
	printf("10 isdigit ? %d\n", ft_isdigit(10));
	printf("-1 isdigit ? %d\n", ft_isdigit(-1));
	printf("0 isdigit ? %d\n", ft_isdigit(0));
	printf("A isdigit ? %d\n", ft_isdigit('a'));
	printf("\n");
	unsigned char simb = '9';
	while(simb <= 'A'){
		printf("%c isalpha ? %d", simb, ft_isalpha(simb));
		printf("	%c isalnum ? %d\n", simb, ft_isalnum(simb));
		simb++;
	}

	unsigned char simb_2 = 'Z';
	while(simb_2 <= 'c'){
		printf("%c isalpha ? %d", simb_2, ft_isalpha(simb_2));
		printf("	%c isascii ? %d", simb_2, ft_isascii(simb_2));
		printf("	%c isalnum ? %d\n", simb_2, ft_isalnum(simb_2));
		simb_2++;
	}
}	
