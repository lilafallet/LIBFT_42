/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 19:00:06 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/30 13:37:19 by lfallet          ###   ########.fr       */
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

int			vct_addstr(t_vector *vct, char *str);
int			vct_add(t_vector *vct, char *str, size_t len);
int			vct_resize(t_vector *vct, size_t len);
void		vct_del(t_vector **vct);
t_vector	 *vct_new(void);
char		*vct_getstr(t_vector *vct);
size_t		vct_getlen(t_vector *vct);
size_t		vct_nlen(t_vector *vct, size_t n);
size_t		vct_clen(t_vector *vct, char c);
void		vct_print(t_vector *vct);
void		vct_print_fd(t_vector *vct, int fd);
void		vct_printendl(t_vector *vct);
void		vct_printendl_fd(t_vector *vct, int fd);
int		vct_pop(t_vector *vct);

#endif
