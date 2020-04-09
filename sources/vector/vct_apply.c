/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_apply.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:25:12 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/09 19:57:13 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vct_apply(t_vector *vct, int flag)
{
	static t_ic_function function_tois[NB_TOIS] = {ft_tolower, ft_toupper,
													ft_isalnum, ft_isalpha,
													ft_isascii, ft_isdigit,
													is_whitespace, ft_isprint};

	if (vct == NULL)
		return (FAILURE);
	if (flag == TO_ATOI)
		return (ft_atoi(vct->str));
	else if (flag < 2)
	{
		ft_striter(vct->str, function_tois[flag]);
		return (TRUE);
	}
	return (ft_strcheck(vct->str, function_tois[flag]));
}
