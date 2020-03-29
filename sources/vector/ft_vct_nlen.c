/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vct_nlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:09:56 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:10:55 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

size_t	ft_vct_nlen(t_vector *vct, size_t n)
{
	if (vct == NULL)
		return (0);
	if (n > vct->len)
		n = vct->len;
	return (n);	
}
