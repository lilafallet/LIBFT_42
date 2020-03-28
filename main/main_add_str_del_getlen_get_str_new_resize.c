/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_add_str_del_getlen_get_str_new_resiz          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 19:57:12 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/28 19:58:50 by lfallet          ###   ########.fr       */
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
		vct = vct_new();
		vct_addstr(vct, av[1]);
		vct_addstr(vct, av[2]);
		vct_add(vct, &c, 1);
		vct_add(vct, &c, 1);
		vct_add(vct, &c, 1);
		vct_add(vct, &c, 1);
		vct_addstr(vct, av[3]);
		ft_printf("la string: [");
		write(1, vct_getstr(vct), vct_getlen(vct));
		ft_printf("]\n");
		vct_del(&vct);
	}
	return (EXIT_SUCCESS);
}
