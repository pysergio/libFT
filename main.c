/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 09:55:22 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/21 15:30:35 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int main (int argc, char **argv)
{	
	char *out;
	int i = -19;
	out = ft_itoa(atoi(argv[argc -1]));

	printf("str = %s\n", out);
	ft_putnbr(atoi(argv[argc -1]));
	ft_putstr("\nIt's work\n");
}

