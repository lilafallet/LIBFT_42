/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_MAIN.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:53:35 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/12 19:07:24 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	char	*new_str;

	new_str = ft_strrchr(av[1], av[2][0]);
	puts(new_str);
	char	*new_str2;

	new_str2 = strrchr(av[1], av[2][0]);
	puts(new_str2);
	return (EXIT_SUCCESS);
}
