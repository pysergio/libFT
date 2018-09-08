/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:49:36 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/28 14:25:01 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	char	*out;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if ((out = ft_strnew(size)) == NULL)
		return (NULL);
	while (size--)
		out[size] = (*f)(s[size]);
	return (out);
}
