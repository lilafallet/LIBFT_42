//pensez a mettre le include

#include "vector.h"

void	vct_cat(t_vector *dest, t_vector *src)
{
	int	j;

	j = 0;
	while (src->str[j] != '\0')
	{
		dest->str[dest->len] = src->str[j];
		j++;
		dest->len++;
	}
	dest->str[dest->len] = '\0';
}
