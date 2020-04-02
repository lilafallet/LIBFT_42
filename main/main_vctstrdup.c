/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vctstrdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 13:57:26 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 14:36:34 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

void	test(char *input)
{
	t_vector	*vct;
	char		*str;

	vct = vct_new();
	vct_addstr(vct, input);
	str = vct_strdup(vct);
	printf("str = %s\n", str); /*debug*/
	free(str);
	vct_del(&vct);
}

int	main(int ac, char **av)
{
	int		i;
	
	i = 1;
	while (i < ac)
		test(av[i++]);
	return (EXIT_SUCCESS);
}
