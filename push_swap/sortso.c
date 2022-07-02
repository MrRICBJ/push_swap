/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortso.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:00:23 by bjanette          #+#    #+#             */
/*   Updated: 2022/02/25 19:47:44 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cond(int j, int i, t_stack *stack)
{
	int	minra;

	stack->b->score_ra = i;
	stack->b->score_rra = stack->size_a - i;
	stack->b->score_rb = j;
	if (j == 0 && stack->size_b == 1)
		stack->b->score_rrb = j;
	else
		stack->b->score_rrb = stack->size_b - j;
	if (stack->b->score_ra < stack->b->score_rra)
	{
		minra = stack->b->score_ra;
		stack->b->score_rra = 0;
	}
	else
	{
		minra = stack->b->score_rra;
		stack->b->score_ra = 0;
	}
	cond2(stack, minra);
}

void	ini(t_list *stack)
{
	stack->score_ra = 0;
	stack->score_rra = 0;
	stack->score_rrb = 0;
	stack->score_rb = 0;
	stack->score_rr = 0;
	stack->score_rrr = 0;
	stack->min = 2147483647;
}

void	chetchik2(t_stack *stack, int *arr_a, int *arr_b)
{
	int	j;
	int	i;

	j = 0;
	while (j < stack->size_b)
	{
		i = 0;
		while (arr_a[i] > arr_b[j])
			i++;
		if ((arr_a[i] < arr_b[j]) && (arr_a[i + 1] > arr_b[j]))
			cond(j, i + 1, stack);
		else
		{
			while (stack->size_a > i && arr_a[i] < arr_b[j])
				i++;
			cond(j, i, stack);
		}
		j++;
		stack->b = stack->b->next;
	}
}

void	chetchik(t_stack *stack)
{
	int		*arr_a;
	int		*arr_b;

	arr_a = malloc(sizeof(int) * stack->size_a);
	if (!arr_a)
		return ;
	arr_b = malloc(sizeof(int) * stack->size_b);
	if (!arr_b)
	{
		free(arr_a);
		return ;
	}
	stack->min = -1;
	getcycle(stack, arr_a, arr_b);
	free(arr_a);
	free(arr_b);
}
