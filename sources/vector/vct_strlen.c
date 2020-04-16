/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 20:53:36 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/16 21:44:04 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h> //

size_t	vct_strlen(t_vector *vct, char *str)
{
	size_t start;
	size_t	len_str;
	char	*vct_str;
	int		ret;

	start = vct_clen(vct, str[0]);
	len_str = ft_strlen(str);
	vct_str = NULL;
	if (vct_getlen(vct) - start < len_str)
	{
		free (vct_str);
		return (vct_getlen(vct));
	}
	vct_str = vct_getstr(vct);
	vct_str = ft_strdup(vct_str + start);
	ret = ft_strnequ(vct_str, str, len_str);
	if (ret == TRUE)
	{
		free (vct_str);
		return (start);
	}
	free (vct_str);
	return (vct_getlen(vct)); 
}
