#include "ft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_str;

	str = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		len_s1 = ft_strlen(s1);	
		len_s2 = ft_strlen(s2);	
		len_str = len_s1 + len_s2;
		str = (char *)malloc(sizeof(char) * (len_str + 1));
		if (str != NULL)
		{
			ft_memcpy(str, s1, len_s1);
			ft_memcpy(str + len_s1, s2, len_s2);
			str[len_str] = '\0';
		}
	}
	else if (s1 == NULL)
		str = ft_strdup(s2);
	else if (s2 == NULL)
		str = ft_strdup(s1);
	return (str);
}
