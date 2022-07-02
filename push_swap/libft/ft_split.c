/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:32:02 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/25 22:00:43 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_uk(const char *n, char c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (!n)
		return (0);
	while (n[a])
	{
		if ((n[a] != c && n[a + 1] == c) \
		|| (n[a] != c && !n[a + 1]))
			i++;
		a++;
	}
	return (i);
}

static int	ft_num_ww(const char *n, char c)
{
	int	i;

	i = 1;
	if (!n)
		return (0);
	while (n[i] && n[i] != c)
		i++;
	return (i);
}

static char	*ft_uk_ww(const char *s, char c)
{
	char	*f;
	int		len;
	int		i;

	i = 0;
	if (!s)
		return (0);
	len = ft_num_ww(s, c);
	f = malloc (sizeof(char) * (len + 1));
	if (!f)
		return (0);
	f[len] = '\0';
	while (s[i] == c)
		i++;
	while (i < len)
	{
		f[i] = s[i];
		i++;
	}	
	return (f);
}

static void	*ft_c(char **sr, int l)
{
	int	i;

	i = 0;
	while (i < l)
		free(sr[i++]);
	free(sr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**sr;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	sr = (char **)malloc (sizeof(char *) * (ft_num_uk(s, c) + 1));
	if (!sr)
		return (0);
	sr[ft_num_uk(s, c)] = NULL;
	while (i < ft_num_uk(s, c))
	{
		while (s[j] == c)
			j++;
		sr[i] = ft_uk_ww(&s[j], c);
		if (!sr[i])
			return (ft_c(sr, ft_num_uk(s, c)));
		while (s[j] != c && s[j])
			j++;
		j++;
		i++;
	}
	return (sr);
}
