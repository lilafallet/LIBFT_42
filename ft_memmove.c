/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:37:42 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/12 16:13:39 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst != NULL || src != NULL)
	{
		i = 0;
		while (i < n)
		{
			if (dst > src)
				((unsigned char *)dst)[n - i - 1] = ((unsigned char *)
					src)[n - i - 1];
			else
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
