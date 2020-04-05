//aouter header

#include "vector.h"
#include <stdio.h>

int	vct_popcut(t_vector *ret_vct, t_vector *vct, size_t end, size_t start)
{	
	size_t	len;

	printf("ajouter header dans function vct_popcut.str\n"); //
	len = end - start;
	if (len == 0)
		len = 1;
	if (len + 1 >= ret_vct->size)
		if (vct_resize(ret_vct, len + 1) == FAILURE)
			return (FAILURE);
	ft_memmove(ret_vct->str, vct->str + start, len);
	ret_vct->len = len;
	return (SUCCESS);
}
