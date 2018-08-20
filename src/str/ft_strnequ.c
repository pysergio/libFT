/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:06:18 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 17:00:21 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

		i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] && s2[i])
		i++;
	if (s1[i] == s2[i])
		return (1);
	return (0);
}
