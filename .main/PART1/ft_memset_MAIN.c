#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	*str;
	char 	*str2;

	(void)ac;
	str = ft_memset(av[1], av[2][0], atoi(av[3]));
	str2 = memset(av[1], av[2][0], atoi(av[3]));
	puts(str);
	puts(str2);
	return (EXIT_SUCCESS);
}
