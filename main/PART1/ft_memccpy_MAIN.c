#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str1[100] = "bonjour";
	
	printf("%s\n", (char *)memccpy(str1, str1, 'a', 4));
	printf("%s\n", (char *)ft_memccpy(str1, str1, 'a', 4)); 
	return (EXIT_SUCCESS);
}
