/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vct_joinfree.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 16:52:02 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 19:43:47 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

void	test(char *input1, char *input2)
{
	t_vector	*vct1;
	t_vector	*vct2;
	t_vector	*vct_test;

	vct1 = vct_new();
	vct2 = vct_new();
	vct_addstr(vct1, input1);
	vct_addstr(vct2, input2);
	vct_test = vct_joinfree(&vct1, &vct2, FIRST | SECOND);
	printf("vct test = %s\n", vct_getstr(vct_test)); /*debug*/
	vct_del(&vct_test);
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


