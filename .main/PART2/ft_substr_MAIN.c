#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;

	(void)ac;
	str = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
	printf("%s\n", str);
	free(str);
	return (EXIT_SUCCESS);
}
