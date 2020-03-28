/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 10:14:48 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/28 10:15:04 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vct_add(t_vector *vct, char *str, size_t len)
{
	if (vct != NULL && str != NULL)
	{
		if (len + vct->len >= vct->size)
			if (vct_resize(vct, len + vct->len) == FAILURE)
				return (FAILURE);
		ft_memmove(vct->str + vct->len, str, len);
		vct->len += len;
	}
	return (SUCCESS);
}
