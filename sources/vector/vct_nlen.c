/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_nlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 22:30:58 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/28 22:51:13 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "stdio.h" /*debug*/

size_t	vct_nlen(t_vector *vct, size_t n)
{
	if (vct == NULL)
		return (0);
	if (n > vct->len)
		n = vct->len;
	return (n);	
}
