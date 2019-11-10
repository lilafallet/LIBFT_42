#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len_str;

	len_str = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len_str + 1));
	if (str != NULL)
		ft_memcpy(str, s, len_str + 1);
	return (str);
}
