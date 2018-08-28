/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:19:14 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/28 22:52:36 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wc(char const *s, char c)
{
	int		i;
	int		j;

	i = -1;
	j = 1;
	while (s[++i])
		if (s[i] != c && (s[i + 1] == c || !(s[i + 1])))
			j++;
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**out;

	if (!s || !(out = (char**)malloc(sizeof(char*) * ft_wc(s, c))))
		return (NULL);
	k = -1;
	i = 0;
	while (s[i] && !(j = 0))
	{
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
			out[++k] = ft_strsub(s, i, j);
		if (s[i += j])
			i++;
	}
	out[++k] = NULL;
	return (out);
}
