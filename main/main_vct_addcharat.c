/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vct_addcharat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 10:54:43 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/31 11:17:56 by lfallet          ###   ########.fr       */
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
		ret = vct_addcharat(vct1, 2, 'H');
		printf("ret = %d\n", ret);
		vct_printendl(vct1);
		vct_addstr(vct2, av[2]);
		ret = vct_addcharat(vct2, 3, '/');
		printf("ret = %d\n", ret);
		vct_printendl(vct2);
		vct_addstr(vct3, av[3]);
		ret = vct_addcharat(vct3, 1, '1');
		printf("ret = %d\n", ret);
		vct_printendl(vct3);
		vct_addstr(vct4, av[4]);
		ret = vct_addcharat(vct4, 10, ' ');
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




