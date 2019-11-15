/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:41:27 by lfallet           #+#    #+#             */
/*   Updated: 2019/11/15 11:32:43 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		count;
	size_t		count_little;
	size_t		count_big;

	count = 0;
	while (big[count] != '\0' && count < len)
	{
		count_little = 0;
		count_big = count;
		while (little[count_little] == big[count_big] &&
			little[count_little] != '\0' && count_big < len)
		{
			count_little++;
			count_big++;
		}
		if (little[count_little] == 0)
			return ((char *)(big + count));
		count++;
	}
	if (!len && !*little)
		return ((char *)big);
	return (NULL);
}
