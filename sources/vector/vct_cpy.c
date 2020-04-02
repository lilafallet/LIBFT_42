/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_cpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:48:15 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 12:02:36 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vct_cpy(t_vector *dest, t_vector *src)
{
	size_t	i;

	i = 0;
	if (dest == NULL || src == NULL || dest->str == NULL || src->str == NULL)
		return (SUCCESS);
	if (src->len + 1 >= dest->size)
	{
		if (vct_resize(dest, src->len + 1) == FAILURE)
			return (FAILURE);
	}
	i = 0;
	while (i < src->len)
	{
		dest->str[i] = src->str[i];
		i++;
	}
	dest->str[i] = '\0';
	dest->len = src->len;
	return (SUCCESS);
}
