/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_split_each.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 18:47:39 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/05 11:44:22 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>
static size_t	initialisation_vct(t_vector *ret_vct, t_vector *vct, size_t i)
{	
	printf("i = %zu\n", i); //
	ft_memmove(ret_vct->str, vct->str, i);
	ft_memmove(vct->str, vct->str + i + 1, vct->len - i + 1);
	vct->len = vct->len - i;
	printf("vct->str = %s\n", vct_getstr(vct)); //
	return (i);
}

t_vector	*vct_split_each(t_vector *vct, char *str, int flag)
{
	t_vector			*ret_vct;	
	static	size_t		i = 0;
	char				*new_str;
	size_t				tmp_len;

	tmp_len = vct->len;
	ret_vct = vct_new();
	if (vct == NULL)
		return (NULL);
	while (i < vct->len)
	{
		if (vct_chrstr(vct, i, str) == TRUE)
		{
			while (vct_chrstr(vct, i + 1, str) == TRUE)
				i++; //faire la difference de i pour pas sauter des caracteres	
			i = initialisation_vct(ret_vct, vct, i);
			i++;
			return (ret_vct);
		}
		i++;
	}
	vct_del(&ret_vct); //
	return (NULL);
}
