/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:03:17 by bjanette          #+#    #+#             */
/*   Updated: 2022/02/17 14:12:23 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	score_rrr(t_list *st)
{
	if (st->score_rra > 0 && st->score_rrb > 0)
	{
		if (st->score_rra < st->score_rrb)
		{
			st->score_rrr = st->score_rra;
			st->score_rrb = st->score_rrb - st->score_rra;
			st->score_rra = 0;
		}
		else if (st->score_rra > st->score_rrb)
		{
			st->score_rrr = st->score_rrb;
			st->score_rra = st->score_rra - st->score_rrb;
			st->score_rrb = 0;
		}
		else if (st->score_rra == st->score_rrb)
		{
			st->score_rrr = st->score_rrb;
			st->score_rrb = 0;
			st->score_rra = 0;
		}
	}
}

void	maxminmed(int *arr, t_med *med)
{
	int	n;

	n = 0;
	arr = sortq(med->i, arr, n);
	if (med->i > 2)
	{
		med->min = arr[0];
		med->max = arr[med->i - 1];
		med->med = arr[(med->i / 2)];
	}
}

void	sa(t_list *lst, int i)
{
	int	tmp;

	if (lst == NULL || lst->next == NULL)
		return ;
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
	if (i == 1)
		write (1, "sa\n", 3);
}

void	ra(t_list **lst, int i)
{
	t_list	*a;
	t_list	*a1;

	if ((*lst) == NULL || (*lst)->next == NULL)
		return ;
	a = (*lst)->next;
	a1 = *lst;
	ft_lstlast(*lst)->next = a1;
	a1->next = NULL;
	*lst = a;
	if (i == 1)
		write (1, "ra\n", 3);
}

void	rr(t_stack **stack, int i)
{
	rb(&(*stack)->b, 0);
	ra(&(*stack)->a, 0);
	if (i)
		write (1, "rr\n", 3);
}
