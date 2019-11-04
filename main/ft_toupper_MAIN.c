/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_MAIN.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:04:19 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/04 15:53:36 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int	new_c;

	(void)ac;
	new_c = ft_toupper(av[1][0]);
	putchar(new_c);
	return (EXIT_SUCCESS);
}
