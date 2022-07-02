/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:19:06 by bjanette          #+#    #+#             */
/*   Updated: 2022/02/17 18:19:22 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algosbigfive(t_stack *stack, t_med *med)
{
	while (stack->size_a != 3)
	{
		if (stack->a->content != med->max && \
		stack->a->content != med->min && \
		stack->a->content != med->med)
		{
			pb(stack, 1);
			if (stack->b->next && stack->b->content > \
			med->med && stack->b != NULL)
				rb(&stack->b, 1);
		}
		else
			ra(&stack->a, 1);
	}
	sort_stack(&stack->a);
	while (stack->size_b > 0)
	{
		chetchik(stack);
		score_rrr(stack->tmp);
		score_rr(stack->tmp);
		game_predover(stack->tmp, stack);
	}
	gameover(stack, med);
}

void	algos(t_med *med, t_stack *stack)
{
	if (med->i == 5 || med->i == 4)
		ft_steak_five(med, stack);
	else if (med->i == 2)
		two_sort(&stack->a);
	else if (med->i == 3)
		tree_sort(&stack->a);
	else if (med->i > 3)
		algosbigfive(stack, med);
}

void	ft_steak(t_med *med, int *arr)
{
	int			i;
	t_stack		*stack;
	t_list		*st;

	i = 0;
	stack = malloc (sizeof(t_stack));
	if (!stack)
		return ;
	stack->b = NULL;
	stack->a = ft_lstnew(arr[i++]);
	if (!stack->a)
		return ;
	stack->size_a = med->i;
	stack->size_b = 0;
	st = stack->a;
	while (i < med->i)
	{
		ft_lstadd_back(&st, ft_lstnew(arr[i++]));
		st = st->next;
	}
	maxminmed(arr, med);
	if (sortso(stack->a) == 0)
		algos(med, stack);
	ft_free(stack);
}

void	ft_steak_five(t_med *med, t_stack *stack)
{
	while (med->i != 3)
	{
		if (stack->a->content == med->max || \
		stack->a->content == med->min)
		{
			pb(stack, 1);
			med->i--;
		}
		else
			ra(&(stack)->a, 1);
	}
	tree_sort(&(stack)->a);
	while (stack->size_b > 0)
	{
		if (stack->b->content == med->max)
		{
			pa(stack, 1);
			ra(&(stack)->a, 1);
		}
		else
			pa(stack, 1);
	}
}

int	main(int ac, char **av)
{
	t_med	med;
	int		*arr;

	arr = NULL;
	if (ac > 1)
	{
		arr = ft_max_min(av, &med, arr);
		ft_copy(arr);
		ft_steak(&med, arr);
	}
	exit(0);
	return (0);
}
