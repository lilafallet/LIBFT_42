#include "ft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%ld\n", ft_strlcpy(av[1], av[2], atoi(av[3])));	
	return (EXIT_SUCCESS);
}
