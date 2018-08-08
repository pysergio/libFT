/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:25:45 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/08 18:23:47 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int     ft_strlen(const char *s)
{
    unsigned int len;

    len = 0;
    while (*s++)
        len++;
    return (len);
}
