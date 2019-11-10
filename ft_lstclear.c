#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst != NULL)
	{
		ft_lstclear(&(*lst)->next, del);
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}	
}
