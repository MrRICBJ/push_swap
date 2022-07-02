/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:04:51 by bjanette          #+#    #+#             */
/*   Updated: 2022/02/17 14:13:40 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sortso(t_list *stack)
{
	while (stack && stack->next)
	{
		if (stack->content < stack->next->content)
			stack = stack->next;
		else
			return (0);
	}
	return (1);
}

void	two_sort(t_list **stack)
{
	if ((*stack)->content > (*stack)->next->content)
		sa(*stack, 1);
}

void	tree_sort(t_list **stack)
{
	while (sortso(*stack) == 0)
	{
		if ((*stack)->content > (*stack)->next->content && \
		(*stack)->content > (*stack)->next->next->content)
			ra(stack, 1);
		if ((*stack)->content > (*stack)->next->content)
			sa(*stack, 1);
		if ((*stack)->next->next->content < (*stack)->next->content && \
		(*stack)->next->next->content < (*stack)->content)
			rra(stack, 1);
		if ((*stack)->next->content > (*stack)->next->next->content)
			rra(stack, 1);
	}
}

int	sort_stack(t_list **stack)
{
	int	i;

	i = 0;
	if ((*stack)->content < (*stack)->next->content)
		i += 1;
	if ((*stack)->next->content < (*stack)->next->next->content)
		i += 1;
	if ((*stack)->next->next->content < (*stack)->content)
		i += 1;
	if (i < 2)
	{
		if ((*stack)->content < (*stack)->next->content \
		&& (*stack)->next->content > (*stack)->next->next->content)
			sa(*stack, 1);
		else if ((*stack)->content > (*stack)->next->content \
		&& (*stack)->content < (*stack)->next->next->content)
			sa(*stack, 1);
		if ((*stack)->content > (*stack)->next->content \
		&& (*stack)->next->content > (*stack)->next->next->content)
			sa(*stack, 1);
	}
	return (1);
}

void	cond2(t_stack *stack, int minra)
{
	int	minrb;

	if (stack->b->score_rb < stack->b->score_rrb)
	{
		minrb = stack->b->score_rb;
		stack->b->score_rrb = 0;
	}
	else
	{
		minrb = stack->b->score_rrb;
		stack->b->score_rb = 0;
	}
	stack->b->min = minra + minrb;
	if (stack->min < 0)
	{
		stack->min = stack->b->min;
		stack->tmp = stack->b;
	}
	else if (stack->b->min <= stack->min)
	{
		stack->min = stack->b->min;
		stack->tmp = stack->b;
	}
}
