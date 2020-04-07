/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 21:51:40 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/07 18:06:00 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

ssize_t	ft_putendl(char *str)
{
	ssize_t	ret;

	ret = write(STDOUT_FILENO, str, ft_strlen(str));
	if (ret != FAILURE)
		ret += write(STDOUT_FILENO, "\n", 1);
	return (ret);
}
