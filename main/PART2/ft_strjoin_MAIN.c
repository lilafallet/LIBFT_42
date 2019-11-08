#include ft.h
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;

	(void)ac;
	str = ft_strjoin(av[1], av[2]);
	printf(%sn, str);
	free(str);
	return (EXIT_SUCCESS);
}
