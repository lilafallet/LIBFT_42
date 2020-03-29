/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vct_clen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 16:07:28 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 16:53:32 by lfallet          ###   ########.fr       */
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
	ssize_t		len;

	if (ac == 5)
	{
		vct1 = vct_new();
		vct2 = vct_new();
		vct3 = vct_new();
		vct4 = vct_new();
		vct_addstr(vct1, av[1]);
		len = vct_clen(vct1, 'c');
		printf("len add 1 = %zd\n", len); /*debug*/
		vct_addstr(vct2, av[2]);
		len = vct_clen(vct2, '1');
		printf("len add 2 = %zd\n", len); /*debug*/
		vct_addstr(vct3, av[3]);
		len = vct_clen(vct3, ' ');
		printf("len add 3 = %zd\n", len); /*debug*/
		vct_addstr(vct4, av[4]);
		len = vct_clen(vct4, 'j');
		printf("len add 4 = %zd\n", len); /*debug*/
		vct_del(&vct1);
		vct_del(&vct2);
		vct_del(&vct3);
		vct_del(&vct4);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
