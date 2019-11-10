#include "ft.h"

int	main(void)
{
	char	*str;
	t_list	*alst;

	str = "lol";
	alst = NULL;
	ft_lstadd_front(&alst, str);
	return (EXIT_SUCCESS);
}
