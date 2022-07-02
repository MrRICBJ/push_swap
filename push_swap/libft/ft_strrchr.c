/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:20:07 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/26 17:18:18 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	int		i;
	int		c1;
	char	h;

	d = (char *)s;
	i = 0;
	h = (char)c;
	c1 = -1;
	while (d[i])
	{
		if (d[i] == h)
			c1 = i;
		i++;
	}
	if (c1 != -1)
		return (&d[c1]);
	if (h == '\0')
		return (&d[i]);
	return (0);
}
