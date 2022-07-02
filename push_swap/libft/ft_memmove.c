/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:29:32 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/25 18:12:45 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst > src)
	{
		while (n--)
			((char *) dst)[n] = ((char *) src)[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
