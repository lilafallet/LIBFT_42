/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_chrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 19:32:24 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/04 20:43:17 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "stdio.h"

int	vct_chrstr(t_vector *vct, size_t index, char *search)
{
	size_t	i;

	while (index < vct->len)
	{
		i = 0;
		while (search[i] != '\0')
		{
			if (vct->str[index] == search[i])
			{
				printf("vct->str[%zu] = %c\n", index, vct->str[index]); //
				return (TRUE);
			}
			i++;
		}
		index++;
	}
	return (FALSE);
}
