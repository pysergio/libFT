/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 20:48:06 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/27 13:52:01 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*tmp;

	tmp = ft_memalloc(n + 1);
	tmp = ft_memcpy(tmp, src, n);
	dst = ft_memcpy(dst, tmp, n);
	free(tmp);
	return (dst);
}
