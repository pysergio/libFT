/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:16:36 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/28 21:56:38 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*out;
	char	*last;

	if (!(s))
		return (NULL);
	while (*s && FT_SEP(*s))
		s++;
	if (!(out = ft_strdup(s)))
		return (NULL);
	last = out + ft_strlen(out) - 1;
	while (last > out && FT_SEP(*last))
		*last-- = 0;
	return (out);
}
