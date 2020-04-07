/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_readline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 20:06:18 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/07 22:02:11 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <unistd.h>

ssize_t	vct_readline(t_vector *vct, const int fd)
{
	ssize_t	ret;
	int		ret_vct;
	char	buff[BUFF_SIZE + 1]; //recupere la chaine de caractere lue
								//enlever le +1

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0) //tant que ret est sup a 0 = fin de fichier         // -1 si erreur // 
	{
		ft_printf("ret = %d\n", ret); //
		buff[BUFF_SIZE] = '\0'; //a enlever apres avoir teste
		ft_printf("buff = %s\n\n", buff); //
	}
	return (ret);
}
