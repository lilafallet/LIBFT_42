/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_split_each.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 18:47:39 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/05 19:25:12 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>
static int	initialisation_vct(t_vector *ret_vct, t_vector *vct, size_t i, size_t index)
{	
	size_t	len;

	len = i - index;
	if (len == 0)
		len = 1;
	if (len + 1 >= ret_vct->size)
		if (vct_resize(ret_vct, len + 1) == FAILURE)
			return (FAILURE);
	ft_memmove(ret_vct->str, vct->str + index, len);
	ret_vct->len = len;
	return (SUCCESS);
}

t_vector	*vct_split_each(t_vector *vct, char *str, int flag)
{
	t_vector			*ret_vct;	
	static t_vector		*vct_base = NULL;
	static size_t		i = 0;
	size_t				index;
	size_t				other_char;
	int					ret;

	if (vct_base == NULL || (vct_base != vct && vct != NULL))
	{
		i = 0;
		vct_base = vct;
	}
	if (vct_base == NULL)
		return (NULL);
	if (vct_chrstr(vct_base, i, str) == TRUE && i == 0)
	{
		while (vct_chrstr(vct_base, i, str) == TRUE)
			i++;
		if (i == vct_base->len)
			return (NULL);
	}
	else if (vct_chrstr(vct_base, vct_base->len - 1, str) == TRUE
				&& i == vct_base->len)
		return (NULL);
	index = i;
	ret_vct = vct_new();
	while (i < vct_base->len)
	{
		if (vct_chrstr(vct_base, i, str) == TRUE)
		{
			other_char = i;
			while (vct_chrstr(vct_base, other_char + 1, str) == TRUE)
				other_char++;
			ret = initialisation_vct(ret_vct, vct_base, i, index);
			if (ret == FAILURE)
				return (NULL);
			if (i != other_char)
				i = other_char;
			i = other_char + 1;
			return (ret_vct);
		}
		i++;
	}
	if (i == vct_base->len && (vct_chrstr(vct_base, i, str) == FALSE))
	{
		ret = initialisation_vct(ret_vct, vct_base, i, index);
		if (ret == FAILURE)
			return (NULL);
		i++;
		return (ret_vct);	
	}
	vct_base = NULL;
	vct_del(&ret_vct);
	return (NULL);
}
