/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:38:06 by bjanette          #+#    #+#             */
/*   Updated: 2022/01/20 10:33:08 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*t;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		t = *lst;
		*lst = (*lst)-> next;
		del(t->content);
		free(t);
	}
}
