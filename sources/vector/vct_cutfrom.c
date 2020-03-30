/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_cutfrom.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 16:59:15 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/30 17:09:17 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vct_cutfrom(t_vector *vct, size_t nb_of_char)
{
	if (vct == NULL)
		return (FAILURE);
	if (nb_of_char <= vct->len)
	{
		ft_memmove(vct->str, vct->str, vct->len - nb_of_char);
		vct->len -= nb_of_char;
	} 
	return (SUCCESS);	
}
