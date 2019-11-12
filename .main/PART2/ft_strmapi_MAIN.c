#include "libft.h"

char	lol(unsigned int i, char c)
{
	return (c + i);
}

#include <stdio.h>

int		main(void)
{
	char	*out;

	out = ft_strmapi("AAAAAAAAAAAAAAAAAAAAAAAAAA", lol);
	printf("%s\n", out);
	free(out);
	return (0);
}
