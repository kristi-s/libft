/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droslyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:04:51 by droslyn           #+#    #+#             */
/*   Updated: 2020/11/03 18:21:57 by droslyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void *ptr;

	while (*lst)
	{
		ptr = *lst->next;
		(*del)(*lst->content);
		free(*lst);
		*lst = ptr;
	}
	**lst = 0;
}
