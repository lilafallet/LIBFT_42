/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_resize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:35:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:35:53 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vct_resize(t_vector *vct, size_t len)
{
	size_t	new_len;
	char	*str;

	if (len < vct->resize)
		new_len = vct->resize;
	else
		new_len = len + len % vct->resize + vct->resize;
	vct->resize = new_len;
	vct->size += new_len;
	str = vct->str;
	vct->str = (char *)malloc(sizeof(char) * (vct->size));
	if (vct->str != NULL)
	{
		ft_bzero(vct->str, vct->size);
		ft_memmove(vct->str, str, vct->len);		
	}
	free(str);
	return (vct->str == NULL ? FAILURE : SUCCESS);
}
