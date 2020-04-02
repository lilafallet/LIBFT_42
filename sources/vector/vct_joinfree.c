/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_joinfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 16:52:16 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 16:56:48 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector *vct_join(t_vector *vct1, t_vector *vct2)
{
	ft_memjoin_free(&vct1->str, vct2->str);
	return (n);
}

