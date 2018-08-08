/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:01:01 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/08 15:28:05 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
            return (((const unsigned char *)s1)[i] -
                ((const unsigned char *)s2)[i]);
        i++;
    }
    return (0);
}
