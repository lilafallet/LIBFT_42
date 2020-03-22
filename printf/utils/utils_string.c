/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:35:50 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/03 15:05:45 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void *s, size_t len)
{
	void	*ptr;

	ptr = NULL;
	if (s != NULL)
	{
		ptr = malloc(len + 1);
		ptr = ft_memcpy(ptr, s, len);
		((char *)ptr)[len] = '\0';
	}
	return (ptr);
}

void	memjoin_free(char **dest, char *src, size_t len_dest, size_t len_src)
{
	char	*str;
	size_t	len_str;

	str = NULL;
	len_str = len_dest + len_src;
	if (*dest != NULL && src != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len_str + 1));
		if (str != NULL)
		{
			ft_memcpy(str, *dest, len_dest);
			ft_memcpy(str + len_dest, src, len_src);
			str[len_str] = '\0';
		}
	}
	else if (*dest == NULL)
		str = ft_memdup(src, len_str);
	else if (src == NULL)
		str = ft_memdup(*dest, len_str);
	free(*dest);
	*dest = str;
}

void	fill_buffer(t_state_machine *machine, char c)
{
	if (machine->len + 1 >= BUFFER_SIZE)
	{
		memjoin_free(&machine->out, machine->buffer, machine->len_out,
						machine->len);
		machine->len_out += machine->len;
		machine->len = 0;
		ft_bzero(machine->buffer, BUFFER_SIZE);
	}
	else
	{
		machine->buffer[machine->len] = c;
		machine->len++;
	}
}

int		is_flag(const char c)
{
	const char	str_mod[] = STR_MOD;
	size_t		nb_mod;
	size_t		i;

	i = 0;
	nb_mod = sizeof(str_mod) / sizeof(char);
	while (i < nb_mod)
	{
		if (c == str_mod[i])
			return ((int)i);
		i++;
	}
	return (-1);
}

int		is_conversion(const char c)
{
	const char	str_conv[] = STR_CONV;
	size_t		i;
	size_t		nb_conv;

	i = 0;
	nb_conv = sizeof(str_conv) / sizeof(char);
	while (i < nb_conv)
	{
		if (c == str_conv[i])
			return ((int)i);
		i++;
	}
	return (-1);
}
