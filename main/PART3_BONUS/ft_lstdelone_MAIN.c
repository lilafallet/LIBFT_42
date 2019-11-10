#include "libft.h"

void	ft_free_list_string(void *data)
{
	free(data);
}

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstdelone(lst, ft_free_list_string);
	return (EXIT_SUCCESS);
}
