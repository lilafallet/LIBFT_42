#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_cp;
	unsigned char	*src_cp;

	dst_cp = (unsigned char *)dst;
	src_cp = (unsigned char *)src;
	if (dst != NULL || src != NULL)
	{
		if (dst < src)
		{
			while (n-- > 0)
				*dst_cp++ = *src_cp++;
		}
		else
		{
			while (n-- > 0)
			dst_cp[n] = src_cp[n];
		}
	}
	return (dst);
}
