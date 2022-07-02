/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:21:37 by bjanette          #+#    #+#             */
/*   Updated: 2022/03/02 17:08:22 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	getsplit(char *a, t_stack *stack)
{
	char	**b;
	int		i;

	i = 0;
	b = ft_split(a, '\n');
	free(a);
	if (!b)
		return ;
	while (b[i])
		deystvia(b[i++], stack);
	free(b);
}

void	line(t_stack *stack)
{
	char	*a;
	char	*line;
	char	*tmp;
	int		i;

	i = 0;
	a = get_next_line(0);
	if (check(a, stack) == 0)
	{
		line = get_next_line(0);
		while (line)
		{
			check(line, stack);
			tmp = a;
			a = ft_strjoin(a, line);
			free(line);
			free(tmp);
			if (!a)
				return ;
			line = get_next_line(0);
		}
		getsplit(a, stack);
	}
}

void	further(t_stack *stack)
{
	line(stack);
	if (sortso(stack->a) == 1 && !stack->b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_free(stack);
}

void	getlist(t_med *med, int *arr)
{
	int			i;
	t_list		*st;
	t_stack		*stack;

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
	further(stack);
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
		getlist(&med, arr);
	}
	exit(0);
	return (0);
}
