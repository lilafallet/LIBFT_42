/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_print_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:24:23 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 20:25:28 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "unistd.h"

void	vct_print_fd(t_vector *vct, int fd)
{
	write(fd, vct_getstr(vct), vct_getlen(vct));
}
