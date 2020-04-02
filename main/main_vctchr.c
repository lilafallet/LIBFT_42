/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vctchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:30:38 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 11:44:47 by lfallet          ###   ########.fr       */
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
		ret = vct_chr(vct1, 's');
		printf("ret = %d\n", ret); /*debug*/
		vct_addstr(vct2, av[2]);
		ret = vct_chr(vct2, '1');
		printf("ret = %d\n", ret); /*debug*/
		vct_addstr(vct3, av[3]);
		ret = vct_chr(vct3, ' ');
		printf("ret = %d\n", ret); /*debug*/
		vct_addstr(vct4, av[4]);
		ret = vct_chr(vct4, 'j');
		printf("ret = %d\n", ret); /*debug*/
		vct_del(&vct1);
		vct_del(&vct2);
		vct_del(&vct3);
		vct_del(&vct4);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}

