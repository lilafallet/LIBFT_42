#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*new_lst;

	new_lst = NULL;
	while (lst != NULL)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem == NULL)
		{
			ft_lstclear(&new_lst, del);
			break ;
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
