/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:47:05 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/28 14:20:28 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		d;
	int		i;
	char	*out;

	if ((out = ft_strnew(11)) == NULL)
		return (NULL);
	if (n == -2147483648)
		return (out = "-2147483648");
	d = 1;
	i = 0;
	if (FT_NEG(n) && (n = FT_ABS(n)))
		out[i++] = '-';
	while (n / d > 10)
		d *= 10;
	while (d)
	{
		out[i++] = n / d + 48;
		n %= d;
		d /= 10;
	}
	return (out);
}
