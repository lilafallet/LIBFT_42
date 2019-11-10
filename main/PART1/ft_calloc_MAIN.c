#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	ft_calloc(atoi(av[1]), atoi(av[2]));
	return (EXIT_SUCCESS);
}
