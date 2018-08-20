/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:16:36 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 17:05:33 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*out;
	int		size;
	int		i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	while (FT_SEP(s[size--]));
	i = 0;
	while (FT_SEP(s[i++]));
	if (FT_NEG(size - i) || !(out = ft_strnew(size - i)))
		return (NULL);
	return (ft_strncpy(out, &s[i], size - i));
}
