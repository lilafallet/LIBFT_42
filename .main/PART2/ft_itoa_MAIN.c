#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)\
{
	char	*str;

	(void)ac;
	str = ft_itoa(atoi(av[1]));
	printf("%s\n", str);
	free(str);
	return (EXIT_SUCCESS);
}
