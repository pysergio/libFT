/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 18:05:50 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/27 17:21:07 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	*a;

	l = ft_strlen(s);
	if (!s)
		return (NULL);
	a = (char *)s;
	while (l > -1)
	{
		if (*(a + l) == (char)c)
			return (a + l);
		l--;
	}
	return (NULL);
}
