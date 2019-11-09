#include "ft.h"

static void		ft_free_tab_str(char ***strs, size_t max_size)
{
	size_t	i;

	i = 0;
	while (i < max_size)
	{
		free((*strs)[i]);
		i++;
	}
	free(*strs);
}

static void		ft_process_split(char ***strs, char *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		len = 0;
		while (*s == c)
			s++;
		while (s[len] != c && s[len] != '\0')
			len++;
		if (len == 0)
			break;
		(*strs)[i] = ft_substr(s, 0, len);
		if ((*strs)[i] == NULL)
		{
			ft_free_tab_str(strs, i);
			break ;
		}
		i++;
		s += len;
	}
}

static size_t	ft_get_word_count(char *s, char c)
{
	size_t	word_count;

	word_count = (*s != c && *s != '\0');
	while (*s != '\0')
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			if (*s == '\0')
				break;
			word_count++;
		}
		s++;
	}
	return (word_count);
} 

char			**ft_split(char const *s1, char c)
{
	char	**strs;
	size_t	word_count;

	word_count = ft_get_word_count((char *)s1, c);
	strs = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (strs != NULL)
		ft_process_split(&strs, (char *)s1, c);
	return (strs);
}
