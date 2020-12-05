/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_popcharat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 10:54:59 by lfallet           #+#    #+#             */
/*   Updated: 2020/12/05 13:04:35 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vct_popcharat(t_vector *vct, size_t index)
{
	if (vct == NULL || index >= vct->len)
		return (FAILURE);
	ft_memmove(vct->str + index, vct->str + index + 1, vct->len - index);
	vct->len--;
	return (SUCCESS);
}
