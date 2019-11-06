#include <stdlib.h>

void *ft_memccpy(void *dest, void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)src)[i] == (char)c)
		{
			((char *)dest)[i + 1] = ((char *)src)[i + 1];
			return (dest + (i + 1));
		}
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (NULL);
}
