/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 19:19:41 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/24 09:04:39 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	int m;

	m = n / sizeof(long);
	i = -1;
	while(++i < m)
		*(unsigned long*)(dst++) = *(unsigned long*)(src++);
	i = -1;
	m = n % sizeof(long);
	while(++i < m)
		*(unsigned char*)(dst++) = *(unsigned char*)(src++);
	return (dst);
}
