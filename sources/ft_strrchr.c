/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:53:45 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/04 18:54:35 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	count;
	int		letter;
	int		last;
	char	*str;
	int		tmp;

	count = 0;
	last = -1;
	str = (char *)s;
	while (str[count] != '\0')
	{
		if (str[count] == c)
		{
			if (last == -1)
				letter = count;
			tmp = count;
			last++;
			count++;
		}
		else
			count++;
	}
	return (last > -1 ? str + letter + (tmp - letter) : NULL);
}
