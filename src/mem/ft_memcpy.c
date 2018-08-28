/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 19:19:41 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/28 21:55:11 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	if (n == 0 || dst == src)
		return (dst);
	i = -1;
	csrc = (unsigned char*)src;
	cdst = (unsigned char*)dst;
	while (++i < n)
		*cdst++ = *csrc++;
	return (dst);
}
