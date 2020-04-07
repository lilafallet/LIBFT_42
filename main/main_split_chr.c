/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split_chr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:02:15 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/07 19:49:23 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

static void	test(char *input1, char c)
{
	t_vector	*vct;
	t_vector	*vct_return;

	vct = vct_new();
	vct_addstr(vct, input1);
	vct_return = vct_splitchr(vct, c);
	ft_printf("vct_return = %s\n\n", vct_getstr(vct_return)); //
	vct_del(&vct_return);
	vct_del(&vct);
}

int			main(int ac, char **av)
{
	int		i;

	i = 1;
	while (i + 1 < ac)
	{
		test(av[i], av[i + 1][0]);
		i += 2;
	}
	return (EXIT_SUCCESS);
}
