/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_chr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:30:47 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 11:43:15 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vct_chr(t_vector *vct, char c)
{
	size_t	i;

	if (vct == NULL)
		return (FAILURE);
	i = 0;
	while (i < vct->len && vct->str[i] != c)
		i++;
	return (i == vct->len ? FAILURE : (int)i);
}
