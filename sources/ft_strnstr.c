# include "ft.h"

static int	ft_are_strings_matched(char *s1, char *s2)
{
	while (*s2 != '\0')
	{
		if (*s1 != *s2)
			return (FALSE);
		s1++;
		s2++;
	}
	return (TRUE);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	long	count;
	long	len_run;

	len_run = (long)(len - ft_strlen(little));
	count = 0;
	while (big[count] != '\0' && count <= len_run)
	{
		if (ft_are_strings_matched((char *)big + count, (char *)little) == TRUE)
			return ((char *)big + count);
		count++;
	}
	return (NULL);
}
