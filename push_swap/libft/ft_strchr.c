/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:00:51 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/26 17:16:42 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const	char *s, int c)
{
	char	d;

	d = (char)c;
	while (*s)
	{
		if (*s == d)
			return (((char *)s));
		s++;
	}
	if (d == '\0')
		return (((char *)s));
	return (0);
}
