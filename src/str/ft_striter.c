/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 00:41:40 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 00:46:13 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f || !*f)
		return ;
	while (*s)
		f(s);
}
