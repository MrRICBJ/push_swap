/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:44:14 by bjanette          #+#    #+#             */
/*   Updated: 2022/03/02 17:09:30 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		s11;
	int		s22;

	if (!s1 || !s2)
		return (0);
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (0);
	s22 = 0;
	s11 = 0;
	while (s1[s22])
	{
		s3[s22] = s1[s22];
		s22++;
	}
	while (s2[s11])
		s3[s22++] = s2[s11++];
	s3[s22] = '\0';
	return (s3);
}
