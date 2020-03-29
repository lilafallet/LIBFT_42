/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vct_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:06:31 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:12:39 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector *ft_vct_new(void)
{
	t_vector	*vct;

	vct = (t_vector *)malloc(sizeof(t_vector));
	if (vct != NULL)
	{
		vct->size = DEFAULT_VECTOR_SIZE;
		vct->resize = DEFAULT_VECTOR_RESIZE;
		vct->len = 0;
		vct->str = (char *)malloc(sizeof(char) * vct->size);	
		if (vct->str == NULL)
		{
			free(vct);
			vct = NULL;
		}
		else
			ft_bzero(vct->str, vct->size);
	}
	return (vct);
}
