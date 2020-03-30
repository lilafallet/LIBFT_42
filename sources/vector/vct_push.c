/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 14:07:29 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/30 16:05:11 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h> /*debug*/

int	vct_push(t_vector *vct, char c)
{
	if (vct == NULL)
		return (FAILURE);
	ft_memmove(vct->str + 1, vct->str, vct->size - 1);
	vct->len++;
	vct->str[0] = c;
	return (SUCCESS);
}
