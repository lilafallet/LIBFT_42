#include "ft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst != NULL && *lst != NULL && del != NULL)
	{
		ft_lstclear(&(*lst)->next, del);
		if (del != NULL)
			del(&(*lst)->content);
		free(lst);
	}	
}
