/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_eq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 15:12:59 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 15:27:42 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vct_eq(t_vector *vct1, t_vector *vct2)
{
	size_t	i;

	if (vct1 == NULL || vct2 == NULL || vct1->str == NULL || vct2->str == NULL
			|| (vct1->len != vct2->len))
		return (FALSE);
	if (vct1->str == NULL && vct2->str == NULL)
		return (TRUE);
	i = 0;
	while (i < vct1->len || i < vct2->len)
	{
		if (vct1->str[i] != vct2->str[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}
