/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:12:57 by bjanette          #+#    #+#             */
/*   Updated: 2022/02/17 22:13:57 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **lst, int i)
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
		write (1, "rb\n", 3);
}

void	getcycle(t_stack *stack, int *arr_a, int *arr_b)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = stack->a;
	while (stack->size_a > i)
	{
		arr_a[i++] = stack->a->content;
		stack->a = stack->a->next;
	}
	stack->a = tmp;
	i = 0;
	tmp = stack->b;
	while (stack->size_b > i)
	{
		arr_b[i++] = stack->b->content;
		stack->b = stack->b->next;
	}
	stack->b = tmp;
	chetchik2(stack, arr_a, arr_b);
	stack->b = tmp;
}

void	ss(t_stack *stack, int i)
{
	sa(stack->a, 0);
	sb(stack->b, 0);
	if (i)
		write (1, "ss\n", 3);
}

void	sb(t_list *lst, int i)
{
	int	tmp;

	if (lst == NULL || lst->next == NULL)
		return ;
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
	if (i == 1)
		write (1, "sb\n", 3);
}
