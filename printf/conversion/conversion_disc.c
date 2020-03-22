/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_disc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:12:54 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/03 15:05:12 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*c_conv(int c, t_option *option)
{
	char	*new_str;
	char	*convert_str;

	convert_str = (char *)malloc(sizeof(char) * (2));
	if (convert_str == NULL)
		return (NULL);
	option->precision = 0;
	option->flag &= ~MOD_DOT;
	convert_str[0] = (char)c;
	convert_str[1] = '\0';
	new_str = NULL;
	new_str = hub_strjoin_width_precision(convert_str, option, 1);
	free(convert_str);
	option->len_conversion = (option->width + option->precision + 1);
	return (new_str);
}

char	*s_conv(char *str, t_option *option)
{
	char			*new_str;
	char			*str_out;
	static char		*null = "(null)";
	size_t			len;

	if (str == NULL)
		str = null;
	if (option->flag & MOD_DOT)
		str_out = ft_strndup(str, option->precision);
	else
		str_out = ft_strdup(str);
	len = ft_strlen(str_out);
	if (option->width < len)
		option->width = 0;
	option->precision = 0;
	option->flag &= ~MOD_DOT;
	new_str = hub_strjoin_width_precision(str, option, len);
	if (new_str == NULL)
		return (NULL);
	option->len_conversion = ft_strlen(new_str);
	free(str_out);
	return (new_str);
}

char	*di_conv(long d, t_option *option)
{
	char	*str;

	d = (int)d;
	str = d >= 0 ? d_superior_zero(option, d) : d_inferior_zero(d, option);
	if (str != NULL)
		option->len_conversion = ft_strlen(str);
	return (str);
}
