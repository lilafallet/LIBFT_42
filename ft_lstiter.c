#include "ft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL && f != NULL)
		return ;
	while (lst->next != NULL)
	{
		(*f)(lst);
		lst = lst->next;
	}
	return ;
}
