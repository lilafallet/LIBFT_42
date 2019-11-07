#include "ft.h"
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	char *s;
	(void)ac;
	
	s = ft_strdup(av[1]);
	printf("%s\n", s);
	free(s);
	return (EXIT_SUCCESS);
}
