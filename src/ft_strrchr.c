/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 18:05:50 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/10 22:06:18 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(char *s, int c)
{
	int l;

	l = ft_strlen(s);
	while (--l >= 0)
		if (s[l] == (char)c)
			return (&s[l]);
	return NULL;
}
