/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ftstrncpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 12:43:03 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/04 12:58:06 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test(char *input1, char *input2)
{
	char *mine_str;
	char	*str;
	static int	n = 0;

	mine_str = ft_strncpy(input1 , input2, n);
	str = ft_strncpy(input1 , input2, n);
	printf("mine = %s\n", mine_str); //
	printf("str = %s\n", str); //
	n += 3;
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
