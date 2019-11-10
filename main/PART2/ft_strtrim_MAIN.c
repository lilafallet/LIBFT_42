#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;

	(void)ac;
	str = ft_strtrim(av[1], av[2]);
	if (str != NULL)
		printf("%s\n", str);
	free(str);
	return (EXIT_SUCCESS);
}
