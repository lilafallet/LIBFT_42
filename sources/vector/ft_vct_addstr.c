/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vct_addstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:05:19 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:11:14 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		ft_vct_addstr(t_vector *vct, char *str)
{
	size_t	len;

	if (vct != NULL && str != NULL)
	{
		len = ft_strlen(str);
		if (len + vct->len >= vct->size)
			if (vct_resize(vct, len + vct->len) == FAILURE)
				return (FAILURE);
		ft_memmove(vct->str + vct->len, str, len);
		vct->len += len;
	}
	return (SUCCESS);
}
