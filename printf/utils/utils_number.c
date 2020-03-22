/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:32:24 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/03 15:07:08 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_size_of_nb(char *s)
{
	size_t		i;

	i = 0;
	if (*s == '*')
		return (1);
	while (ft_isdigit(s[i]) == TRUE)
		i++;
	return (i);
}

int		is_number(char *str)
{
	return (ft_isdigit(str[0]) || str[0] == '*');
}
