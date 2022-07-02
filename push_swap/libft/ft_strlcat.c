/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:36:42 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/25 18:13:11 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	k;
	size_t	j;
	size_t	i;

	k = ft_strlen (d);
	j = ft_strlen (s);
	i = 0;
	if (n <= k)
		return (j + n);
	while (i < n - 1 - k && s[i])
	{
		d[k + i] = s[i];
		i++;
	}
	d[k + i] = '\0';
	return (k + j);
}
