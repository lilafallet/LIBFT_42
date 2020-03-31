/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vct_apply.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:25:00 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/31 21:34:55 by lfallet          ###   ########.fr       */
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
	t_vector	*vct5;
	t_vector	*vct6;
	t_vector	*vct7;
	t_vector	*vct8;
	t_vector	*vct9;
	int			ret;

	if (ac == 10)
	{
		vct1 = vct_new();
		vct2 = vct_new();
		vct3 = vct_new();
		vct4 = vct_new();
		vct5 = vct_new();
		vct6 = vct_new();
		vct7 = vct_new();
		vct8 = vct_new();
		vct9 = vct_new();
		vct_addstr(vct1, av[1]);
		ret = vct_apply(vct1, TO_LOWER);
		vct_printendl(vct1);
		vct_addstr(vct2, av[2]);
		ret = vct_apply(vct2, TO_UPPER);
		vct_printendl(vct2);
		vct_addstr(vct3, av[3]);
		ret = vct_apply(vct3, TO_ATOI);
		printf("ret = %d\n", ret); /*debug*/
		vct_addstr(vct4, av[4]);
		ret = vct_apply(vct4, TO_ATOI);
		printf("ret = %d\n", ret); /*debug*/
		vct_addstr(vct5, av[5]);
		ret = vct_apply(vct5, IS_ALNUM);
		printf("ret = %d\n", ret); /*debug*/
		vct_addstr(vct6, av[6]);
		ret = vct_apply(vct6, IS_ALPHA);
		printf("ret = %d\n", ret); /*debug*/
		vct_addstr(vct7, av[7]);
		ret = vct_apply(vct7, IS_ASCII);
		printf("ret = %d\n", ret); /*debug*/
		vct_addstr(vct8, av[8]);
		ret = vct_apply(vct8, IS_DIGIT);
		printf("ret = %d\n", ret); /*debug*/
		vct_addstr(vct9, av[9]);
		ret = vct_apply(vct9, IS_PRINT);
		printf("ret = %d\n", ret); /*debug*/
		vct_del(&vct1);
		vct_del(&vct2);
		vct_del(&vct3);
		vct_del(&vct4);
		vct_del(&vct5);
		vct_del(&vct6);
		vct_del(&vct7);
		vct_del(&vct8);
		vct_del(&vct9);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
