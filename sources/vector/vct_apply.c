/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_apply.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:25:12 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/31 18:02:17 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h> /*debug*/

static int	function_tois(t_vector *vct, int flag)
{
	static t_function_tois[NB_TOIS] = {ft_tolower, ft_toupper, ft_isalnum,
										ft_isalpha, ft_isascii, ft_isdigit,
										ft_isprint};
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < NB_TOIS)
	{
		if (i == flag)
		{
			while (j < vct->len)
			{
				vct->apply.ret_d = function_tois[vc->apply.apply_tois](vct[j]);
				j++;
			}
			return (SUCCESS);
		}
		i++;
	}
	return (FAILURE);
}

static int	function_conv(t_vector *vct, int flag)
{
	static t_function_conv[NB_CONVERSION] = {ft_atoi, ft_atoul};
	int		i;

	i = 0;
	while (i < NB_CONVERSION)
	{
		if (i == TO_ATOI)
		{
			vct->apply.ret_d = function_conv[vct->apply.apply_conv](str);
			return (SUCCESS);
		}
		else if (i == TO_ATOUL)
		{
			vct->apply.ret_ul = function_conv[vct->apply.apply_conv](str);
			return (SUCCESS);
		}
		i++;
	}
	return (FAILURE);
}

int	vct_apply(t_vector *vct, int flag)
{
	static size_t		index_print = 0; /*debug*/
	int					ret;

	if (vct == NULL)
		return (FAILURE);
	printf("flag[%zu] = %d\n", index_print, flag); /*debug*/
	if (flag == TO_ATOI || TO_ATOUL)
		ret = function_conv(vct, flag);
	else
		ret = function_tois(vct, flag);
	index_print++; /*debug*/
	return (flag == TO_ATOUL ? vct->apply.ret_ul : vct->apply.ret);
}	
