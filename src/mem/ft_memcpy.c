/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 19:19:41 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/23 16:02:41 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	int m;
	unsigned long  *cdst = dst;
	unsigned long  *csrc = src;

	*csrc = src;
	*cdst = dst;
	m = n / sizeof(long);
	i = -1;
	while(++i < m)
		*(cdst++) = *(csrc++);
	i = -1;
	m = n % sizeof(long);
	while(++i < m)
		*(unsigned char*)(cdst++) = *(unsigned char*)(csrc++);
	return (dst);
}
