/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_MAIN.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:04:19 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/04 14:55:32 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_isdigit(av[1][0]));
	return (EXIT_SUCCESS);
}
