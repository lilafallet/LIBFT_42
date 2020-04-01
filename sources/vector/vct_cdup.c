/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_cdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 16:55:24 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/01 16:55:27 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

t_vector	*vct_cdup(t_vector *vct, char c)
{
	t_vector *new_vct;
	size_t	i;

	i = 0;
	new_vct = vct_new();
	if (vct == NULL)
		return (NULL);
	while (i < vct->len && vct->str[i] != c)
	{
		new_vct->str[i] = vct->str[i];
		i++;
	}
	new_vct->len = i;
	printf("vct->len = %zu\n", new_vct->len); /*debug*/ 
	return (new_vct);
}
