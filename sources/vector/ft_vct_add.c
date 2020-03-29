/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vct_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:04:10 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:11:07 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		ft_vct_add(t_vector *vct, char *str, size_t len)
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
