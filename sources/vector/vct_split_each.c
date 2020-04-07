/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_split_each.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 18:47:39 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/07 10:50:44 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

static t_vector	*process(size_t *i, t_vector *vct_base, char *str)
{
	size_t	start;

	start = *i;
	while (*i < vct_base->len)
	{
		if (vct_chrstr(vct_base, *i, str) == TRUE)
			break ;
		(*i)++;
	}
	return (vct_popcut(vct_base, *i, start));
}

t_vector	*vct_split_each(t_vector *vct, char *str, int flag)
{
	static t_vector		*vct_base = NULL;
	static size_t		i = 0;
	size_t				start_flag;

	start_flag = 0;
	if (flag == YES_SEPARATOR)
		start_flag = i;
	if (vct_base == NULL || (vct_base != vct && vct != NULL))
	{
		i = 0;
		vct_base = vct;
	}
	while (i < vct_base->len && ft_strchr(str, vct_base->str[i]) != NULL)
		i++;
	if (flag == YES_SEPARATOR && i != start_flag)
		return (vct_popcut(vct_base, i, start_flag));
	if (i < vct_base->len)
		return (process(&i, vct_base, str));
	vct_base = NULL;
	return (NULL);
}
