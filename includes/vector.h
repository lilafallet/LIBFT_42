/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 19:00:06 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:19:29 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "libft.h"

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# ifndef SUCCESS
#  define SUCCESS 0
# endif

# ifndef FAILURE
#  define FAILURE -1
# endif

# define DEFAULT_VECTOR_SIZE		64
# define DEFAULT_VECTOR_RESIZE		16

typedef struct	s_vector
{
		char	*str;
		size_t	size;
		size_t	len;
		size_t	resize;
}				t_vector;

int			ft_vct_addstr(t_vector *vct, char *str);
int			ft_vct_add(t_vector *vct, char *str, size_t len);
int			ft_vct_resize(t_vector *vct, size_t len);
void		ft_vct_del(t_vector **vct);
t_vector	 *ft_vct_new(void);
ssize_t		ft_vct_getlen(t_vector *vct);
char		*ft_vct_getstr(t_vector *vct);
size_t		ft_vct_len(t_vector *vct);
size_t		ft_vct_nlen(t_vector *vct, size_t n);
size_t		ft_vct_clen(t_vector *vct, char c);

#endif
