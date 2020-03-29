/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vct_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:44:59 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 20:46:20 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_vector	*vct1;
	t_vector	*vct2;
	t_vector	*vct3;
	t_vector	*vct4;

	if (ac == 5)
	{
		vct1 = vct_new();
		vct2 = vct_new();
		vct3 = vct_new();
		vct4 = vct_new();
		vct_pop(vct1, av[1]);
		vct_print(vct1);
		vct_pop(vct2, av[2]);
		vct_print(vct2);
		vct_pop(vct3, av[3]);
		vct_print(vct3);
		vct_pop(vct4, av[4]);
		vct_print(vct4);
		vct_del(&vct1);
		vct_del(&vct2);
		vct_del(&vct3);
		vct_del(&vct4);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
