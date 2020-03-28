/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_getlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 10:15:55 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/28 10:16:17 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

ssize_t	vct_getlen(t_vector *vct)
{
	if (vct != NULL)
		return ((ssize_t)vct->len);
	return (FAILURE);
}
