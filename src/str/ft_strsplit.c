/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:19:14 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 20:52:27 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**out;

	if (!s)
		return (NULL);
	i = 0;
	if (!(j = 0) && s[i] != c && ++j)
	while (s[i])
		if (s[i] == c && s[++i] != c)
			j++;
	out = (char**)malloc(sizeof(char*) * (j + 1));
	i = -1;
	k = 0;
	while (s[++i])
		if (s[i] != c && !(j = 0))
		{
			while (s[i] != c && s[++i])
				j++;
			if (j && (i -= j) + 1)
				out[k] = ft_strnew(j);
			while (j--)
				out[k][j] = s[i + j];
			k++;
		}
	return (out);
}
