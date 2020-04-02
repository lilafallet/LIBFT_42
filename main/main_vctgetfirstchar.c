/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vctgetfirstchar.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 15:34:40 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 15:35:58 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

void	test(char *input)
{
	t_vector	*vct;
	char		c;

	vct = vct_new();
	vct_addstr(vct, input);
	c = vct_getfirstchar(vct);
	printf("c = %c\n", c); /*debug*/
	vct_del(&vct);
}

int	main(int ac, char **av)
{
	int		i;
	
	i = 1;
	while (i < ac)
		test(av[i++]);
	return (EXIT_SUCCESS);
}

