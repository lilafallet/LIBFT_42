/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_join.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 16:32:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 16:48:53 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector *vct_join(t_vector *vct1, t_vector *vct2)
{
	char *str;

	t_vector *new_vct;
	new_vct = vct_new();
	str = ft_strjoin(vct1->str, vct2->str);
	vct_addstr(new_vct, str);
	free(str);
	return (new_vct);
}
