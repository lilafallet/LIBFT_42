#include "ft.h"

int	main(int ac, char **av)
{
	(void)ac;
	ft_putendl_fd(av[1], 1);
	return (EXIT_SUCCESS);
}
