/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:34:01 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/26 17:07:30 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;
	unsigned char	h;

	d = (unsigned char *)s;
	i = 0;
	h = (unsigned char)c;
	while ((i < n))
	{
		if (d[i] == h)
			return (&d[i]);
		i++;
	}
	return (0);
}
