#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_isascii(av[1][0]));
	return (EXIT_SUCCESS);
}
