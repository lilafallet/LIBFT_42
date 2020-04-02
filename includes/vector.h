/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 19:00:06 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 11:42:20 by lfallet          ###   ########.fr       */
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

# define NB_CONVERSION 2
# define NB_TOIS 7


enum	e_apply_tois
{
	TO_LOWER,
	TO_UPPER,
	IS_ALNUM,
	IS_ALPHA,
	IS_ASCII,
	IS_DIGIT,
	IS_PRINT,
	TO_ATOI,
};

typedef struct	s_vector
{
		char			*str;
		size_t			size;
		size_t			len;
		size_t			resize;
}				t_vector;

typedef int	(*ic_function)(int);

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
int			vct_pop(t_vector *vct);
int			vct_cut(t_vector *vct);
int			vct_push(t_vector *vct, char c);
int			vct_popfrom(t_vector *vct, size_t nb_of_char);
int			vct_cutfrom(t_vector *vct, size_t nb_of_char);
int			vct_pushstr(t_vector *vct, char *str);
int			vct_addstrat(t_vector *vct, size_t index, char *str);
int			vct_addcharat(t_vector *vct, size_t index, char c);
int			vct_apply(t_vector *vct, int flag);
void		vct_cat(t_vector *dest, t_vector *src);
t_vector	*vct_cdup(t_vector *vct, char c);
t_vector	*vct_dup(t_vector *vct);
int			vct_chr(t_vector *vct, char c);

#endif
