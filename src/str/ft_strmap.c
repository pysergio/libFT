/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:49:36 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 17:14:27 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	char	*out;

	size = ft_strlen(s);
	out = (char*)malloc(sizeof(char) * (size + 1));
	if (out == NULL)
		return (NULL);
	while (size--)
		out[size] = f(s[size]);
	return (out);
}
