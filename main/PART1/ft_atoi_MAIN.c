#include "ft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	return (EXIT_SUCCESS);
}
