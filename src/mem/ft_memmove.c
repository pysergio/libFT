/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 20:48:06 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 20:04:50 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*buf;
	unsigned int	i;

	if (*(unsigned char*)dst == 0 || *(unsigned char*)src == 0)
		return (0);
	if (!(buf = malloc(n)))
		return (NULL);
	i = -1;
	ft_memcpy(buf, src, n);
	while (++i < n)
		((char *)dst)[i] = buf[i];
	free(buf);
	return (dst);
}
