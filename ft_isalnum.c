/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:04:05 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/04 16:56:47 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d, %d\n", ft_isalnum(atoi(av[1])), isalnum(atoi(av[1])));
	}
	return (0);
}*/
