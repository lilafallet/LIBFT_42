/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_split_each.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 18:47:39 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/05 21:11:29 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

t_vector	*vct_split_each(t_vector *vct, char *str, int flag)
{
	t_vector			*ret_vct;	
	static t_vector		*vct_base = NULL;
	static size_t		i = 0;
	size_t				start;
	size_t				other_char;
	int					ret;

	if (vct_base == NULL || (vct_base != vct && vct != NULL)) //faire une fonction check_vct
	{
		i = 0;
		vct_base = vct;
	}
	if (vct_base == NULL)
		return (NULL); //check_vct
	if (vct_chrstr(vct_base, i, str) == TRUE && i == 0) //faire une fonction first_are_true
	{
		while (vct_chrstr(vct_base, i, str) == TRUE)
			i++;
		if (i == vct_base->len)
			return (NULL);
	} //first_are_truc
	else if (vct_chrstr(vct_base, vct_base->len - 1, str) == TRUE
				&& i == vct_base->len) //faire une fonction last_is_true
		return (NULL); //last_is_truc
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
