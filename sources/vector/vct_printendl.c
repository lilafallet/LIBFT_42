/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_printendl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 20:31:59 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 20:32:49 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "unistd.h"

void	vct_printendl(t_vector *vct)
{
	write(STDOUT_FILENO, vct_getstr(vct), vct_getlen(vct));
	write(STDOUT_FILENO, "\n", 1);
}
