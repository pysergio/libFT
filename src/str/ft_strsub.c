/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:16:36 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 13:26:29 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *out;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	out = ft_strnew(len);
	if (!out)
		return (NULL);
	return (ft_strncpy(out, s + start, len));
}
