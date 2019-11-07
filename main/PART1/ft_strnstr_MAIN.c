#include "ft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*new_str;
	
	(void)ac;
	new_str = ft_strnstr(av[1], av[2], atoi(av[3]));
	if (new_str != NULL)
		puts(new_str);
	return (EXIT_SUCCESS);
}
