/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vct_split_each.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 18:32:35 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/07 10:49:12 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

void	test(char *input1, char *input2)
{
	t_vector	*vct;
	t_vector	*vct_return;

	vct = vct_new();
	vct_addstr(vct, input1);
	while ((vct_return = vct_split_each(vct, input2, NO_SEPARATOR)) != NULL)
	{
		printf("vct_return = %s\n\n", vct_getstr(vct_return)); //
		vct_del(&vct_return);
	}
	printf("vct_return NULL DIRECT = %s\n\n", vct_getstr(vct_return)); //
	vct_del(&vct);
}

int	main(int ac, char **av)
{
	int		i;
	
	i = 1;
	while (i + 1 < ac)
	{
		test(av[i], av[i + 1]);
		i += 2;
	}
	return (EXIT_SUCCESS);
}
