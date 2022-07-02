/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:14:26 by bjanette          #+#    #+#             */
/*   Updated: 2022/02/17 14:15:11 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_union(char *s)
{
	int	arr[255];
	int	i;

	i = 0;
	while (i < 255)
		arr[i++] = 0;
	i = 0;
	while (s[i])
	{
		if (!arr[(unsigned char)s[i]])
			arr[(unsigned char)s[i]] = 1;
		else
			return (0);
		i++;
	}
	return (1);
}
