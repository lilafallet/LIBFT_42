/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vcteq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 15:12:48 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 15:29:43 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

void	test(char *input1, char *input2)
{
	t_vector	*vct1;
	t_vector	*vct2;
	int			ret;

	vct1 = vct_new();
	vct2 = vct_new();
	vct_addstr(vct1, input1);
	vct_addstr(vct2, input2);
	ret = vct_eq(vct1, vct2);
	printf("ret = %d\n", ret); /*debug*/
	vct_del(&vct1);
	vct_del(&vct2);
}

int	main(int ac, char **av)
{
	int		i;
	
	i = 1;
	while (i < ac)
	{
		test(av[i], av[i + 1]);
		i += 2;
	}
	return (EXIT_SUCCESS);
}

