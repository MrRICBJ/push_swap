/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:28:58 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/23 21:49:18 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ch(long int n)
{
	long int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static long int	ft_ch1(long int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char		*s;
	long int	b;
	long int	f;
	long int	w;

	w = n;
	b = ft_ch(w);
	s = (char *) malloc (sizeof(char) * (b + 1));
	if (!s)
		return (0);
	s[b] = '\0';
	if (w == 0)
		s[0] = '0';
	f = ft_ch1(w);
	b--;
	while (b >= 0)
	{
		s[b] = (f % 10) + '0';
		f = f / 10;
		b--;
	}
	if (w < 0)
		s[0] = '-';
	return (s);
}
