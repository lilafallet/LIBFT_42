/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 16:10:27 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/04 16:39:13 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test(char *input1, char *input2)
{
	int	ret;
	static int	n = 0;

	ret = ft_strequ(input1 , input2);
	printf("ret = %d\n", ret); //
	n += 3;
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

