/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_printendl_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:35:46 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 20:37:29 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "unistd.h"

void	vct_printendl_fd(t_vector *vct, int fd)
{
	write(fd, vct_getstr(vct), vct_getlen(vct));
	write(fd, "\n", 1);
}
