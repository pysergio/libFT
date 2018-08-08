/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:54:41 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/08 23:40:13 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < size)
		j++;
	return (i + j);
}


int main () {
	char src[50], dest[50];
 
	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	
	printf("Final destination string : |%lu|  |%s|", strlcat(dest, src, 21), dest);
	
	return(0);
 }