/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_MAIN.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:53:35 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/04 17:48:10 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	char	*new_str;
	new_str = ft_strchr(av[1], av[2][0]);
	puts(new_str);
	return (EXIT_SUCCESS);
}