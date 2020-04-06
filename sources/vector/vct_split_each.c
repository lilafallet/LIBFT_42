/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_split_each.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 18:47:39 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/06 15:36:12 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

static int first_are_true(t_vector *vct_base, size_t i, char *str)
{
	while (vct_chrstr(vct_base, i, str) == TRUE)
		i++;
	return ((int)(i));
}

static int	check_first_last(t_vector *vct_base, size_t *i, char *str)
{
	int	ret;

	ret = TRUE;
	if (vct_base == NULL)
		ret = FAILURE;
	else if (vct_chrstr(vct_base, *i, str) == TRUE && *i == 0)
	{
		ret = first_are_true(vct_base, *i, str);
		*i = (size_t)ret;
		if ((size_t)ret == vct_base->len)
			ret = FALSE;
	}
	else if (vct_chrstr(vct_base, vct_base->len - 1, str) == TRUE
				&& *i == vct_base->len)
		ret = FALSE;
	return (ret);
}

t_vector	*vct_split_each(t_vector *vct, char *str, int flag)
{
	t_vector			*ret_vct;	
	static t_vector		*vct_base = NULL;
	static size_t		i = 0;
	size_t				start;
	size_t				other_char;
	int					ret;

	if (vct_base == NULL || (vct_base != vct && vct != NULL))
	{
		i = 0;
		vct_base = vct;
	}
	ret = check_first_last(vct_base, &i, str);
	if (ret == FALSE || ret == FAILURE)
		return (NULL);
	start = i;
	ret_vct = vct_new();
	while (i < vct_base->len)
	{
		if (vct_chrstr(vct_base, i, str) == TRUE) //faire une fonction char_is_true
		{
			other_char = i;
			while (vct_chrstr(vct_base, other_char + 1, str) == TRUE)
				other_char++;
			ret = vct_popcut(ret_vct, vct_base, i, start);
			if (ret == FAILURE)
				return (NULL);
			if (i != other_char)
				i = other_char + 1;
			else
				i++;
			return (ret_vct); //char_is_true
		}
		i++;
	}
	if (i == vct_base->len && (vct_chrstr(vct_base, i, str) == FALSE)) //faire une fonction last_is_false
	{
		ret = vct_popcut(ret_vct, vct_base, i, start);
		if (ret == FAILURE)
			return (NULL);
		i++;
		return (ret_vct);	
	}
	vct_base = NULL;
	vct_del(&ret_vct);
	return (NULL);
}
