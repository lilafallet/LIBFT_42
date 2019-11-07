#include "ft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total_size;

	tab = NULL;
	if (nmemb != 0 && size != 0)
	{
		total_size = nmemb * size;
		tab = malloc(total_size);
		if (tab != NULL)
			ft_bzero(tab, total_size);
	}
	return (tab);
}
