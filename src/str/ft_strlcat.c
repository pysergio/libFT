/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:54:41 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/27 23:15:47 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && (dst_size + i + 1) < size)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	if (i)
		dst[dst_size + i] = '\0';
	return (src_size + ((dst_size < size) ? dst_size : size));
}
