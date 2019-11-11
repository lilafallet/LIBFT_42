#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	beg;
	ssize_t	end;
	size_t	len_s1;

	str = NULL;
	if (set == NULL && s1 != NULL)
		str = ft_strdup(s1);
	else if (s1 != NULL)
	{
		beg = 0;
		len_s1 = ft_strlen(s1);
		end = len_s1;
		if (len_s1 > 0)
			end--;
		while (ft_strchr(set, s1[beg]) != NULL && s1[beg] != '\0')
			beg++;
		while (ft_strchr(set, s1[end]) != NULL && end >= 0)
			end--;
		if (beg != len_s1 && end != -1)
			str = ft_substr(s1, beg, end - beg + 1);
		else							
			str = ft_strdup("");
	}
	return (str);
}
