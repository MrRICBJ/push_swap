/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:04:59 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/23 21:50:27 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int a, size_t n)
{
	unsigned char	*b;

	b = s;
	while (n--)
		*b++ = a;
	return (s);
}
