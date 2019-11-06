#include "ft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;
	char	*s;

	i = 0;
	j = 0;
	s = (char *)big;
	if (little == NULL)
		return (s);
	while (s[i] != '\0' && j <= len)
	{
		if (s[i] == little[j])
		{
			tmp = i;
			i++;
			j++;
		}
		else if (s[i - 1] == little[j - 1] && s[i] != little[j])
		{
			i++;
			tmp = 0;
			j = 0;
		}
	}
	return (j == len ? s + tmp : NULL);
}
