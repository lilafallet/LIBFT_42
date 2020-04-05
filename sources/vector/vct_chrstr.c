/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_chrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 19:32:24 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/05 11:22:26 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "stdio.h"

int	vct_chrstr(t_vector *vct, size_t index, char *search)
{
	size_t	i;

	i = 0;
	while (search[i] != '\0')
	{
		if (vct->str[index] == search[i])
			return (TRUE);
		i++;
	}
	return (FALSE);
}
