/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 23:52:13 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 00:01:18 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memalloc(size_t size)
{
	void *array;

	array = (void*)malloc(sizeof(void) * size);
	if (array == NULL)
		return NULL;
	ft_bzero(array, size);
	return (array);
}
