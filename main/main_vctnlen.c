/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vctnlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 22:29:52 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:18:51 by lfallet          ###   ########.fr       */
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
	size_t		len;

	if (ac == 5)
	{
		vct1 = ft_vct_new();
		vct2 = ft_vct_new();
		vct3 = ft_vct_new();
		vct4 = ft_vct_new();
		ft_vct_addstr(vct1, av[1]);
		len = ft_vct_nlen(vct1, 18);
		printf("len add 1 = %zu\n", len); /*debug*/
		ft_vct_addstr(vct2, av[2]);
		len = ft_vct_nlen(vct2, 2);
		printf("len add 2 = %zu\n", len); /*debug*/
		ft_vct_addstr(vct3, av[3]);
		len = ft_vct_nlen(vct3, 2);
		printf("len add 3 = %zu\n", len); /*debug*/
		ft_vct_addstr(vct4, av[4]);
		len = ft_vct_nlen(vct4, 1);
		printf("len add 4 = %zu\n", len); /*debug*/
		ft_vct_del(&vct1);
		ft_vct_del(&vct2);
		ft_vct_del(&vct3);
		ft_vct_del(&vct4);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
