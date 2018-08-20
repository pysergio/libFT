/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 16:45:47 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 17:49:06 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int main(int argc, char const *argv[])
{
	
	char **out;
	printf("started ... \n");
	if (argc == 3)
	{
		out = ft_strsplit(argv[1], *argv[2]);
		while (*out)
			printf("[%s] ", (*out)++);
	}
	return 0;
}
