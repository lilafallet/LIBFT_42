#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = NULL;
	if (s != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str != NULL)
		{
			ft_memcpy(str, s + start, len);
			str[len] = '\0';
		}
	}
	return (str);	
}
