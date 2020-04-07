/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vct_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 16:08:14 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/07 16:12:23 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

void	test(char *input1, char *input2, int flag)
{
	t_vector	*vct;
	t_vector	*vct_return;

	vct = vct_new();
	vct_addstr(vct, input1);
	while ((vct_return = vct_split(vct, input2, flag)) != NULL)
	{
		printf("vct_return = %s\n\n", vct_getstr(vct_return)); //
		vct_del(&vct_return);
	}
	printf("vct_return NULL DIRECT = %s\n\n", vct_getstr(vct_return)); //
	vct_del(&vct);
}

int	main(int ac, char **av)
{
	int		i;
	
	i = 1;
	while (i + 2 < ac)
	{
		test(av[i], av[i + 1], ft_atoi(av[i + 2]));
		i += 3;
	}
	return (EXIT_SUCCESS);
}
