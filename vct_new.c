/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 19:02:48 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/27 19:38:48 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector *vct_new(void)
{
	t_vector	*vct;

	vct = (t_vector *)malloc(sizeof(t_vector));
	if (vct != NULL)
	{
		vct->size = DEFAULT_VECTOR_SIZE;
		vct->resize = DEFAULT_VECTOR_RESIZE;
		vct->len = 0;
		vct->str = (char *)malloc(sizeof(char) * vct->size);	
		if (vct->str == NULL)
		{
			free(vct);
			vct = NULL;
		}
		else
			ft_bzero(vct->str, vct->size);
	}
	return (vct);
}

void	vct_del(t_vector **vct)
{
	if (vct != NULL && *vct != NULL)
	{
		free((*vct)->str);
		free(*vct);
		*vct = NULL;
	}
}

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

int		vct_add(t_vector *vct, char *str, size_t len)
{
	if (vct != NULL && str != NULL)
	{
		if (len + vct->len >= vct->size)
			if (vct_resize(vct, len + vct->len) == FAILURE)
				return (FAILURE);
		ft_memmove(vct->str + vct->len, str, len);
		vct->len += len;
	}
	return (SUCCESS);
}

int		vct_addstr(t_vector *vct, char *str)
{
	size_t	len;

	if (vct != NULL && str != NULL)
	{
		len = ft_strlen(str);
		if (len + vct->len >= vct->size)
			if (vct_resize(vct, len + vct->len) == FAILURE)
				return (FAILURE);
		ft_memmove(vct->str + vct->len, str, len);
		vct->len += len;
	}
	return (SUCCESS);
}

ssize_t	vct_getlen(t_vector *vct)
{
	if (vct != NULL)
		return ((ssize_t)vct->len);
	return (FAILURE);
}

char	*vct_getstr(t_vector *vct)
{
	if (vct != NULL)
		return (vct->str);
	return (NULL);
}
