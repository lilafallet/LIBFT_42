/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vct_cut.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 13:53:24 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/30 13:55:07 by lfallet          ###   ########.fr       */
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
	int			ret;
	
	if (ac == 5)
	{
		vct1 = vct_new();
		vct2 = vct_new();
		vct3 = vct_new();
		vct4 = vct_new();
		vct_addstr(vct1, av[1]);
		ret = vct_cut(vct1);
		printf("ret = %d\n", ret);
		vct_printendl(vct1);
		vct_addstr(vct2, av[2]);
		ret = vct_cut(vct2);
		printf("ret = %d\n", ret);
		vct_printendl(vct2);
		vct_addstr(vct3, av[3]);
		ret = vct_cut(vct3);
		printf("ret = %d\n", ret);
		vct_printendl(vct3);
		vct_addstr(vct4, av[4]);
		ret = vct_cut(vct4);
		printf("ret = %d\n", ret);
		vct_printendl(vct4);
		vct_del(&vct1);
		vct_del(&vct2);
		vct_del(&vct3);
		vct_del(&vct4);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
