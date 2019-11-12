#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	char	*new_str;
	new_str = ft_memchr(av[1], av[2][0], atoi(av[3]));
	puts(new_str);
	return (EXIT_SUCCESS);
}
