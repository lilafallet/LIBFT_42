/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:39:52 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/17 17:12:53 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len_str;
	size_t	i;

	i = 0;
	len_str = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len_str + 1));
	if (str != NULL)
	{
		ft_memcpy(str, s, len_str);
		str[len_str] = '\0';
	}
	return (str);
}
