#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	return (EXIT_SUCCESS);
}
