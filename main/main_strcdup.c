/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 13:11:55 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/04 13:24:19 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test(char *input1, char c)
{
	char	*str;
	static int	n = 0;

	str = ft_strcdup(input1 , c);
	printf("str = %s\n", str); //
	n += 3;
	free(str);
}

int	main(int ac, char **av)
{
	int		i;
	
	i = 1;
	while (i < ac)
	{
		test(av[i], av[i + 1][0]);
		i += 2;
	}
	return (EXIT_SUCCESS);
}

