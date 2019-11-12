#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%ld\n", ft_strlcpy(av[1], av[2], atoi(av[3])));	
	printf("%ld\n", strlcpy(av[1], av[2], atoi(av[3])));	
	return (EXIT_SUCCESS);
}
