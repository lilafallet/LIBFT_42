/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_MAIN.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:04:19 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/04 15:59:04 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int	new_c;

	(void)ac;
	new_c = ft_tolower(av[1][0]);
	putchar(new_c);
	return (EXIT_SUCCESS);
}
