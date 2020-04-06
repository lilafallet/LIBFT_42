/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_split_each.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 18:47:39 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/06 19:40:01 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

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

	if (vct_base == NULL || (vct_base != vct && vct != NULL))
	{
		i = 0;
		vct_base = vct;
	}
	while (i < vct_base->len && ft_strchr(str, vct_base->str[i]) != NULL)
		i++;
	if (i < vct_base->len)
		return (process(&i, vct_base, str));
	vct_base = NULL;
	return (NULL);
}
