#include "ft.h"
#include <stdio.h>

static void	free_tab_str(char ***str)
{
	size_t	i;

	i = 0;
	while ((*str)[i] != NULL)
	{
		free((*str)[i]);
		i++;
	}
	free(*str);
	*str = NULL;
}

static void	print_tab_str(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		printf("tab[%ld] = %s\n", i, str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	char	**str;

	(void)ac;
	str = ft_split(av[1], av[2][0]);
	print_tab_str(str);
	free_tab_str(&str);
	return (EXIT_SUCCESS);
}
