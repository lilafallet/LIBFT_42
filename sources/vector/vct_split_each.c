/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_split_each.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 18:47:39 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/04 20:44:23 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

t_vector	*vct_split_each(t_vector *vct, char *str, int flag)
{
	t_vector	*ret_vct;	
	size_t		i;

	i = 0;
	ret_vct = vct_new();
	if (vct == NULL)
		return (NULL);
	while (i < vct->len)
	{
		if (vct_chrstr(vct, i, str) == TRUE)
			i++; //METTRE la chaine dans le vecteur
		else
			i++;
	}
	vct_del(&ret_vct); //
	return (NULL);
}
