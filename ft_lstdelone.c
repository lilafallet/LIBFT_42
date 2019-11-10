#include "ft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
		return ;
	del(lst->content);
	free(lst);
	lst	= NULL;
}
