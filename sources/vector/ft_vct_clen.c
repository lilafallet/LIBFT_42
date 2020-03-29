/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vct_clen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:05:41 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:11:24 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

size_t	ft_vct_clen(t_vector *vct, char c)
{
	size_t	i;

	i = 0;
	if (vct == NULL)
		return (0);
	while (i < vct->len)
	{
		if (vct->str[i] == c)
			break ;
		i++;
	}
	return (i);	
}
