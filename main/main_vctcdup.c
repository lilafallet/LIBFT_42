/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vctcdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 16:55:32 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/01 16:55:35 by lfallet          ###   ########.fr       */
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
	t_vector	*new1;
	t_vector	*new2;
	t_vector	*new3;
	t_vector	*new4;

	if (ac == 5)
	{
		vct1 = vct_new();
		vct2 = vct_new();
		vct3 = vct_new();
		vct4 = vct_new();
		vct_addstr(vct1, av[1]);
		new1 = vct_cdup(vct1, 'c');
		printf("new  = %s\n", vct_getstr(new1)); /*debug*/
		vct_addstr(vct2, av[2]);
		new2 = vct_cdup(vct2, '1');
		printf("new  = %s\n", vct_getstr(new2)); /*debug*/
		vct_addstr(vct3, av[3]);
		new3 = vct_cdup(vct3, ' ');
		printf("new  = %s\n", vct_getstr(new3)); /*debug*/
		vct_addstr(vct4, av[4]);
		new4 = vct_cdup(vct4, 'j');
		printf("new  = %s\n", vct_getstr(new4)); /*debug*/
		vct_del(&vct1);
		vct_del(&vct2);
		vct_del(&vct3);
		vct_del(&vct4);
		vct_del(&new1);
		vct_del(&new2);
		vct_del(&new3);
		vct_del(&new4);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
