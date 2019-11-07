#include "ft.h"

int	main(int ac, char **av)
{
	(void)ac;
	ft_bzero(av[1], atoi(av[2]));
	return (EXIT_SUCCESS);
}
