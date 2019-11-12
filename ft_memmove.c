/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:37:42 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/12 10:22:35 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_cp;
	unsigned char	*src_cp;

	dst_cp = (unsigned char *)dst;
	src_cp = (unsigned char *)src;
	if (dst != NULL || src != NULL)
	{
		if (dst < src)
		{
			while (n-- > 0)
				*dst_cp++ = *src_cp++;
		}
		else
		{
			while (n-- > 0)
				dst_cp[n] = src_cp[n];
		}
	}
	return (dst);
}
