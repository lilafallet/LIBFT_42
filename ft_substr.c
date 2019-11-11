/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:44:14 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/11 15:44:16 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = NULL;
	if (s != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str != NULL)
		{
			ft_memcpy(str, s + start, len);
			str[len] = '\0';
		}
	}
	return (str);	
}
