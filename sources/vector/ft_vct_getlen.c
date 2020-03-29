/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vct_getlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:05:58 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:11:52 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

ssize_t	ft_vct_getlen(t_vector *vct)
{
	if (vct != NULL)
		return ((ssize_t)vct->len);
	return (FAILURE);
}
