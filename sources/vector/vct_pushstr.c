/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_pushstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 19:07:46 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/30 19:14:39 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vct_pushstr(t_vector *vct, char *str)
{
	size_t	len_str;
	size_t	i;

	if (vct == NULL)
		return (FAILURE);
	len_str = ft_strlen(str);
	i = 0;
	ft_memmove(vct->str + len_str, vct->str, vct->size - len_str);
	vct->len += len_str;
	while (i < len_str)
	{
		vct->str[i] = str[i];
		i++;
	}
	return (SUCCESS);
}
