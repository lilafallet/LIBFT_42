/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 21:37:37 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 21:54:33 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test(char *input)
{
	ssize_t	ret;

	ret = ft_putstr(input);
	ret = ft_putendl(input);
}

int	main(int ac, char **av)
{
	int		i;
	
	i = 1;
	while (i < ac)
	{
		test(av[i]);
		i++;
	}
	return (EXIT_SUCCESS);
}



