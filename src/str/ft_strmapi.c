/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:49:36 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 17:11:36 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	i;
	char			*out;

	size = ft_strlen(s);
	out = (char*)malloc(sizeof(char) * (size + 1));
	if (out == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		out[i] = f(i, s[i]);
		i++;
	}
	return (out);
}