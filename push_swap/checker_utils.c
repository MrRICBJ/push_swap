/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:39:45 by bjanette          #+#    #+#             */
/*   Updated: 2022/03/02 16:07:39 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check(char *buf, t_stack *stack)
{
	if (buf)
	{
		if ((ft_strcmp("sa\n", buf) && ft_strcmp("sb\n", buf) && \
		ft_strcmp("ss\n", buf) && ft_strcmp("pa\n", buf) && \
		ft_strcmp("pb\n", buf) && ft_strcmp("ra\n", buf) && \
		ft_strcmp("rb\n", buf) && ft_strcmp("rr\n", buf) && \
		ft_strcmp("rra\n", buf) && ft_strcmp("rrb\n", buf) \
		&& ft_strcmp("rrr\n", buf)) || buf[0] == '\n')
		{
			free(buf);
			ft_free(stack);
			error();
		}
		return (0);
	}
	return (1);
}

void	deystvia(char *line, t_stack *stack)
{
	if (!ft_strcmp(line, "sa"))
		sa(stack->a, 0);
	else if (!ft_strcmp(line, "sb"))
		sb(stack->b, 0);
	else if (!ft_strcmp(line, "pa"))
		pa(stack, 0);
	else if (!ft_strcmp(line, "pb"))
		pb(stack, 0);
	else if (!ft_strcmp(line, "ra"))
		ra(&stack->a, 0);
	else if (!ft_strcmp(line, "rb"))
		rb(&stack->b, 0);
	else if (!ft_strcmp(line, "rra"))
		rra(&stack->a, 0);
	else if (!ft_strcmp(line, "rrb"))
		rrb(&stack->b, 0);
	else if (!ft_strcmp(line, "ss"))
		ss(stack, 0);
	else if (!ft_strcmp(line, "rr"))
		rr(&stack, 0);
	else if (!ft_strcmp(line, "rrr"))
		rrr(&stack, 0);
	free(line);
}
