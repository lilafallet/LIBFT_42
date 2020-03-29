/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_add_str_del_getlen_get_str_new_resiz          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 19:57:12 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:14:08 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <unistd.h>

int		main(int ac, char **av)
{
	t_vector	*vct;
	char		c;

	c = 0;
	if (ac == 4)
	{
		vct = ft_vct_new();
		ft_vct_addstr(vct, av[1]);
		ft_vct_addstr(vct, av[2]);
		ft_vct_add(vct, &c, 1);
		ft_vct_add(vct, &c, 1);
		ft_vct_add(vct, &c, 1);
		ft_vct_add(vct, &c, 1);
		ft_vct_addstr(vct, av[3]);
		ft_printf("la string: [");
		write(1, ft_vct_getstr(vct), ft_vct_getlen(vct));
		ft_printf("]\n");
		ft_vct_del(&vct);
	}
	return (EXIT_SUCCESS);
}
