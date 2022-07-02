/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:32:46 by bjanette          #+#    #+#             */
/*   Updated: 2022/02/17 22:25:44 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_med
{
	int	max;
	int	min;
	int	med;
	int	i;
}	t_med;

typedef struct s_stack
{
	t_list	*a;
	t_list	*b;
	t_list	*tmp;
	int		size_a;
	int		size_b;
	int		min;
}	t_stack;

int		*ft_max_min(char **av, t_med *med, int *arr);
int		ft_atoi(const char *s);
int		*sortq(int size, int *arr, int n);
void	ft_steak(t_med *med, int *arr);
void	sa(t_list *lst, int i);
void	ra(t_list **lst, int i);
void	rra(t_list **lst, int i);
void	rb(t_list **lst, int i);
void	rrb(t_list **lst, int i);
void	pb(t_stack *lst, int i);
void	pa(t_stack *lst, int i);
int		sortso(t_list *stack);
int		sort_stack(t_list **stack);
void	chetchik(t_stack *stack);
void	ft_copy(int *arr);
void	f(t_stack *stack, t_med *med);
t_list	*f1(t_list *st, int min);
void	rrr(t_stack **stack, int i);
void	rr(t_stack **stack, int i);
void	ini(t_list *stack);
void	two_sort(t_list **stack);
void	tree_sort(t_list **stack);
void	ft_steak_five(t_med *med, t_stack *stack);
void	error(void);
void	gameover(t_stack *stack, t_med *med);
void	ft_free(t_stack *stack);
void	game_predover(t_list *st, t_stack *stack);
void	score_rr(t_list *st);
void	score_rrr(t_list *st);
void	maxminmed(int *arr, t_med *med);
void	cond2(t_stack *stack, int minra);
void	getcycle(t_stack *stack, int *arr_a, int *arr_b);
void	chetchik2(t_stack *stack, int *arr_a, int *arr_b);
void	sb(t_list *lst, int i);
void	ss(t_stack *stack, int i);
int		ft_atoi1(const char *s);

#endif