#include "libft.h"

void	ft_free_list_string(void *data)
{
	free(data);
}

int	main(void)
{
	t_list	*begin_list;

	begin_list = NULL;
	ft_lstclear(&begin_list, ft_free_list_string);
	return (EXIT_SUCCESS);
}
