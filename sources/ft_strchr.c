/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:53:45 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/04 17:51:45 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
			return ((char *)s + count);
		count++;
	}
	return (NULL);
}
