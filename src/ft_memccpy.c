/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 19:46:01 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/10 17:28:04 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c,
	size_t n)
{
	while (n--)
		if ((*(unsigned char*)dst++ = *(unsigned char*)src++) == c)
			return (dst);
	return (NULL);
}
