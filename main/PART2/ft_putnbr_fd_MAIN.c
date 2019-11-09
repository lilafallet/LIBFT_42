#include "ft.h"

int	main(int ac, char **av)
{
	
	(void)ac;
	ft_putnbr_fd(atoi(av[1]), 1);
	return (EXIT_SUCCESS);
}
