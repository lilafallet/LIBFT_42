#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;

	(void)ac;
	str = ft_memset(av[1], av[2][0], atoi(av[3]));
	puts(str);
	return (EXIT_SUCCESS);
}
