#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	char	*new_str;
	new_str = ft_memchr(av[1], av[2][0], atoi(av[3]));
	puts(new_str);
	char	*new_str2;
	new_str2 = memchr(av[1], av[2][0], atoi(av[3]));
	puts(new_str2);
	return (EXIT_SUCCESS);
}
