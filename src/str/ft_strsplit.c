/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:19:14 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 18:10:26 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**out;
	printf("0\n");
	if (!s)
		return (NULL);
	i = 0;
	if (!(j = 0) && s[i] != c && ++j)
	while (s[i])
		if (s[i] == c && s[++i] != c)
			j++;
	out = (char**)malloc(sizeof(char*) * (j + 1));

	printf("1\n");
	i = -1;
	while (s[++i])
		if (s[i] != c && !(j = 0))
		{
			while (s[i] != c && s[++i])
				j++;
			if (j)
				*out = ft_strnew(j);
			printf("i = %d, j = %d\n", i, j);
			printf("out[null] = %s\n", *out);
			while (j--)
				*out[j] = s[i - j];
			printf("out[0] = %s\n", *out);
			//(*out)++;
		}
	return (out);
}