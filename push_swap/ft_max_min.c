/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:18:07 by bjanette          #+#    #+#             */
/*   Updated: 2022/02/25 21:23:46 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_array(char *s)
{
	int	i;

	i = -1;
	i = 0;
	if (!ft_strncmp("", s, 1))
		error();
	while (s[++i])
	{
		if ((((s[i] < '0') || (s[i] > '9')) && (s[i] != '-') \
		&& (s[i] != ' ')) || (s[i] == '-' && s[i + 1] == ' '))
			error();
	}
}

int	ft_count(char **av)
{
	int		j;
	int		k;
	int		i;
	char	**a;

	k = 0;
	i = 0;
	j = 1;
	while (av[j])
	{
		a = ft_split(av[j], ' ');
		if (!a)
			return (0);
		ft_array(av[j]);
		j++;
		i = 0;
		while (a[i])
		{
			k++;
			free(a[i++]);
		}
		free(a);
	}
	return (k);
}

int	*ft_max_min(char **av, t_med *med, int *arr)
{
	int		i1;
	int		i;
	int		j;
	char	**a;

	i1 = -1;
	j = 1;
	med->i = ft_count(av);
	arr = malloc (sizeof(int) * (med->i));
	if (!arr)
		return (0);
	arr[med->i] = 0;
	while (av[j])
	{
		a = ft_split(av[j], ' ');
		ft_array(av[j++]);
		i = 0;
		while (a[i])
		{
			arr[++i1] = ft_atoi1(a[i]);
			free(a[i++]);
		}
		free(a);
	}
	return (arr);
}

void	ft_copy(int *arr)
{
	int		i;
	int		j;

	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (arr[i] != arr[j])
				j++;
			else
				error();
		}
		i++;
	}
}

int	*sortq(int size, int *arr, int n)
{
	int			j;
	int			med;
	int			tmp;

	n = 0;
	j = size - 1;
	med = arr[size / 2];
	while (n <= j)
	{
		while (arr[n] < med)
			n++;
		while (arr[j] > med)
			j--;
		if (n <= j)
		{
			tmp = arr[n];
			arr[n++] = arr[j];
			arr[j--] = tmp;
		}
	}
	if (j > 0)
		sortq(j + 1, arr, n);
	if (n < size)
		sortq(size - n, &arr[n], n);
	return (arr);
}
