/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 22:06:58 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 22:20:13 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test(char *input1, char *input2)
{
	char *new_str;

	new_str = ft_strcat(input1, input2);
	printf("new_str = %s\n", new_str); /*debug*/
}

int	main(int ac, char **av)
{
	int		i;
	
	i = 1;
	while (i < ac)
	{
		test(av[i], av[i + 1]);
		i += 2;
	}
	return (EXIT_SUCCESS);
}

