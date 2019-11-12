/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:40:11 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/12 11:40:33 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	j;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	j = 0;
	if (size <= len_dest)
		len_src += size;
	else
		len_src += len_dest;
	if (size > len_dest)
	{
		while (src[j] != '\0' && len_dest < size - 1)
		{
			dest[len_dest] = src[j];
			len_dest++;
			j++;
		}
		dest[len_dest] = '\0';
	}
	return (len_src);
}
