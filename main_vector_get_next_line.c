/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vector_get_next_line.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 17:00:23 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/28 17:08:30 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		ret;

	if (ac == 1)
		return (EXIT_FAILURE);
	line = NULL;
	fd = open(av[1], O_RDONLY);
	while ((ret = vct_gnl(fd, &line)) > 0)
	{
		printf("line : |%s| ret : %d\n", line, ret);
		free(line);
		line = NULL;
	}
	printf("line : |%s| ret : %d\n", line, ret);
	free(line);
	close(fd);
	return (EXIT_SUCCESS);
}
