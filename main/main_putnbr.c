/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 22:06:58 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 22:08:10 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test(int input)
{
	ft_putnbr(input);
}

int	main(int ac, char **av)
{
	int		i;
	
	i = 1;
	while (i < ac)
	{
		test(ft_atoi(av[i]));
		i++;
	}
	return (EXIT_SUCCESS);
}

