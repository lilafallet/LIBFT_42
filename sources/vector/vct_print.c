/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:35:41 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:35:43 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "unistd.h"

void	vct_print(t_vector *vct)
{
	write(STDOUT_FILENO, vct_getstr(vct), vct_getlen(vct));
}
