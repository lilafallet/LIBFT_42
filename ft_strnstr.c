/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:41:27 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/12 20:38:12 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	len_little;

	count = 0;
	len_little = ft_strlen(little);
	while (big[count] != '\0'
		&& len_little <= len && count <= (len - len_little))
	{
		if (ft_strncmp(big + count, little, len_little) == 0)
			return ((char *)big + count);
		count++;
	}
	return (NULL);
}
