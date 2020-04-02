/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_cdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 16:55:24 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 11:14:54 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	*vct_cdup(t_vector *vct, char c)
{
	t_vector *new_vct;
	size_t	i;

	if (vct == NULL)
		return (NULL);
	i = 0;
	new_vct = vct_new();
	while (i < vct->len && vct->str[i] != c)
	{
		new_vct->str[i] = vct->str[i];
		i++;
	}
	new_vct->len = i;
	new_vct->size = vct->size;
	return (new_vct);
}
