/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_cut.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 13:54:38 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/30 14:05:40 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vct_cut(t_vector *vct)
{
	if (vct == NULL)
		return (FAILURE);
	if (vct->len == 0)
		return (SUCCESS);
	ft_memmove(vct->str, vct->str, vct->len - 1);
	vct->len--;
	return (SUCCESS);
}
