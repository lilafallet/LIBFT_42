#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	j;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	j = 0;
	if (size <= len_dest)
		len_src = len_src + size;
	else
		len_src = len_src + len_dest;
	while (src[j] != '\0' && len_dest + 1 < size)
	{
		dest[len_dest] = src[j];
		len_dest++;
		j++;
	}
	dest[len_dest] = '\0';
	return (len_src);
}
