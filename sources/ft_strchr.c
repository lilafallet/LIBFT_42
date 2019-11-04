/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:53:45 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/04 17:51:45 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h> //DEBUG A ENLEVER

char	*ft_strchr(const char *s, int c)
{
	size_t	count;
	char	*chr;

	count = 0;
	chr = (char *)s;
	while (chr[count] != '\0')
	{
		if (chr[count] == c)
		{
			printf("%zu\n", count); //DEBUG A ENLEVER
			return (chr + count);
		}
		else
			count++;
	}
	return (NULL);
}
