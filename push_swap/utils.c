/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:03:24 by bjanette          #+#    #+#             */
/*   Updated: 2022/03/02 16:40:53 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(0);
}

void	gameover(t_stack *stack, t_med *med)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = stack->a;
	stack->a = tmp;
	while (tmp->content != med->min)
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= stack->size_a - i)
		while (i-- > 0)
			ra(&stack->a, 1);
	else
		while (i++ < stack->size_a)
			rra(&stack->a, 1);
}

void	ft_free(t_stack *stack)
{
	while (stack->a)
	{
		free(stack->a);
		stack->a = stack->a->next;
	}
	if (stack->b)
	{
		free(stack->b);
		stack->b = stack->b->next;
	}
	free(stack);
}

void	game_predover(t_list *st, t_stack *stack)
{
	while (st->score_ra-- > 0)
		ra(&stack->a, 1);
	while (st->score_rb-- > 0)
		rb(&stack->b, 1);
	while (st->score_rra-- > 0)
		rra(&stack->a, 1);
	while (st->score_rrb-- > 0)
		rrb(&stack->b, 1);
	while (st->score_rrr-- > 0)
		rrr(&stack, 1);
	while (st->score_rr-- > 0)
		rr(&stack, 1);
	pa(stack, 1);
}

void	score_rr(t_list *st)
{
	if (st->score_ra > 0 && st->score_rb > 0)
	{
		if (st->score_ra < st->score_rb)
		{
			st->score_rr = st->score_ra;
			st->score_rb = st->score_rb - st->score_ra;
			st->score_ra = 0;
		}
		else if (st->score_ra > st->score_rb)
		{
			st->score_rr = st->score_rb;
			st->score_ra = st->score_ra - st->score_rb;
			st->score_rb = 0;
		}
		else if (st->score_ra == st->score_rb)
		{
			st->score_rr = st->score_rb;
			st->score_rb = 0;
			st->score_ra = 0;
		}
	}
}
