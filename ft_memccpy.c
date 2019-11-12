/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:36:06 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/12 11:43:11 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (dest != NULL || src != NULL)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			if (((unsigned char *)src)[i] == (unsigned char)c)
				return (dest + i + 1);
			i++;
		}
	}
	return (NULL);
}
