/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:02:43 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/26 18:11:55 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - (size_t)start))
		len = ft_strlen(s) - (size_t)start;
	s1 = (char *) malloc (sizeof (char) * (len + 1));
	if (!s1)
		return (0);
	while ((i < len) && s[i])
		s1[i++] = s[start++];
	s1[len] = '\0';
	return (s1);
}
