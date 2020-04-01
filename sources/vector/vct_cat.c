/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_cat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 16:58:17 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/01 16:58:19 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vct_cat(t_vector *dest, t_vector *src)
{
	int	j;

	j = 0;
	while (src->str[j] != '\0')
	{
		dest->str[dest->len] = src->str[j];
		j++;
		dest->len++;
	}
	dest->str[dest->len] = '\0';
}
