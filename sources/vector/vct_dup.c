/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:17:16 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 11:18:42 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	*vct_dup(t_vector *vct)
{
	t_vector *new_vct;
	size_t	i;

	if (vct == NULL)
		return (NULL);
	i = 0;
	new_vct = vct_new();
	while (i < vct->len)
	{
		new_vct->str[i] = vct->str[i];
		i++;
	}
	new_vct->len = vct->len;
	new_vct->size = vct->size;
	return (new_vct);
}

