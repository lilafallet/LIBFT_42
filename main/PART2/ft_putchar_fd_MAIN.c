#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	ft_putchar_fd(av[1][0], 2);
	return (EXIT_SUCCESS);
}
