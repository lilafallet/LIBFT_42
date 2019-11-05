#include "ft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			count;

	count = 0;
	i = 0;
	while (src[count] != '\0')
		count++;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (count);
}
