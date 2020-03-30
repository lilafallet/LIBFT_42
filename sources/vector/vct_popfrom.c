/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_popfrom.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 16:42:09 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/30 16:44:48 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vct_popfrom(t_vector *vct, size_t nb_of_char)
{
	if (vct == NULL || nb_of_char > vct->len)
		return (FAILURE);
	ft_memmove(vct->str, vct->str + nb_of_char, vct->len);
	vct->len -= nb_of_char;
	return (SUCCESS);
}
