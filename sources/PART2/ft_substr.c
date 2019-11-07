#include "ft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len) + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);	
}
