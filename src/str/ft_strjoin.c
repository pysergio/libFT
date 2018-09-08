/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:16:36 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 13:54:07 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *out;

	if (!s1 || !s2)
		return (NULL);
	out = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!out)
		return (NULL);
	return (ft_strcat(ft_strcpy(out, s1), s2));
}
