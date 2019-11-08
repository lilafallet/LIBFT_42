#include "ft.h"

size_t	ft_strchr_count(const char *s, int c, size_t count)
{
	while (s[count] != '\0')
	{
		if (s[count] == c)
			return (count);
		count++;
	}
	return (count);
}

char	**ft_split_process(char **str, char const *s1,
		size_t number_of_str, int *tab)
{
	size_t	len_s1;
	size_t	tmp;

	len_s1 = ft_strlen(s1);
	tmp = 0;

	while (tmp < number_of_str)
	{
		if (tmp == 0)
			str[tmp] = ft_substr(s1, tab[tmp], tab[tmp + 1] - 1);
		if (tmp == number_of_str - 1)
			str[tmp] = ft_substr(s1, tab[tmp],
			(len_s1 - tab[tmp - 1] - 1));
		else
			str[tmp] = ft_substr(s1, tab[tmp],
			(tab[tmp + 1] - tab[tmp] - 1));
		tmp++; 
	}
	return (str);
}

size_t	ft_ischar(char const *s1, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			count++;
		i++;
	}
	return (count);
}

void	ft_init_tab(int *tab, size_t number_of_str)
{
	size_t	tmp;

	tmp = 0;
	while (tmp < number_of_str)
	{
		tab[tmp] = 0;
		tmp++;
	}
}
char	**ft_split(char const *s1, char c)
{
	char	**str;
	int		tab[100];
	size_t	number_of_str;
	size_t	tmp;
	size_t	count;

	number_of_str = ft_ischar(s1, c);
	ft_init_tab(tab, number_of_str);
	tmp = 0;
	count = 0;
	while(s1[count] != '\0' && tmp < number_of_str)
	{
		count = ft_strchr_count(s1, c, count);
		tab[tmp] = count + 1;
		count ++;
		tmp++;
	}
	str = (char **)malloc(sizeof(char *) * (number_of_str));
	if (str == NULL)
		return (NULL);
	str = ft_split_process(str, s1, number_of_str, tab);
	return (str);	
}
