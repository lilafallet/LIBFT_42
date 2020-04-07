/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_read_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 19:11:41 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/07 22:03:20 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <fcntl.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	t_vector	*line;
	int			fd;

	if (ac != 2)
		return (EXIT_FAILURE);
	fd = open(av[1], O_RDONLY);
	if (fd != -1)
	{
		line = vct_new();
		while (vct_readline(line, fd) > 0)
			vct_printendl(line);
		vct_del(&line);
		close(fd);
	}
	return (EXIT_SUCCESS);
}
