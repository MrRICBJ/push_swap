/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:28:55 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/25 18:13:20 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!l[i])
		return ((char *)b);
	while (b[i])
	{
		j = 0;
		while (b[i + j] == l[j] && (i + j) < n)
		{
			if (!b[i + j] && !l[j])
				return ((char *)b + i);
			j++;
		}
		if (!l[j])
			return ((char *)b + i);
		i++;
	}
	return (0);
}
