/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:41:14 by bjanette          #+#    #+#             */
/*   Updated: 2022/02/17 14:05:07 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **lst, int i)
{
	t_list	*a;
	t_list	*a1;
	t_list	*a2;

	if ((*lst) == NULL || (*lst)->next == NULL)
		return ;
	a1 = *lst;
	a = *lst;
	while (a->next->next)
		a = a->next;
	a2 = a->next;
	a->next = NULL;
	a2->next = a1;
	*lst = a2;
	if (i == 1)
		write (1, "rra\n", 4);
}

void	rrb(t_list **lst, int i)
{
	t_list	*a;
	t_list	*a1;
	t_list	*a2;

	if ((*lst) == NULL || (*lst)->next == NULL)
		return ;
	a1 = *lst;
	a = *lst;
	while (a->next->next)
		a = a->next;
	a2 = a->next;
	a->next = NULL;
	a2->next = a1;
	*lst = a2;
	if (i == 1)
		write (1, "rrb\n", 4);
}

void	pb(t_stack *lst, int i)
{
	t_list	*tmp;

	lst->size_a -= 1;
	lst->size_b += 1;
	tmp = lst->a;
	lst->a = lst->a->next;
	tmp->next = lst->b;
	lst->b = tmp;
	if (i)
		write (1, "pb\n", 3);
}

void	pa(t_stack *lst, int i)
{
	t_list	*tmp;

	lst->size_a += 1;
	lst->size_b -= 1;
	tmp = lst->b;
	lst->b = lst->b->next;
	tmp->next = lst->a;
	lst->a = tmp;
	if (i)
		write (1, "pa\n", 3);
}

void	rrr(t_stack **stack, int i)
{
	rrb(&(*stack)->b, 0);
	rra(&(*stack)->a, 0);
	if (i)
		write (1, "rrr\n", 4);
}
