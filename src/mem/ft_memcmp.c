/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:01:01 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/28 14:01:55 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		cmp;

	i = -1;
	while (++i < n)
	{
		cmp = *(unsigned char *)s1++ - *(unsigned char *)s2++;
		if (cmp)
			return (cmp);
	}
	return (cmp);
}
