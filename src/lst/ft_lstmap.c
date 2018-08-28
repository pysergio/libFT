/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 18:40:48 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/28 22:23:58 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;

	if (!lst)
		return (NULL);
	if (!(elem = (t_list *)malloc(sizeof(*elem))))
		return (NULL);
	elem = f(lst);
	elem->next = ft_lstmap(lst->next, f);
	return (elem);
}
