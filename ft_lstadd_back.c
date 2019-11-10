#include "ft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*begin;
	if (alst != NULL && *alst != NULL && new != NULL)
	{
		begin = (*alst);
		if (begin == NULL)
			(*alst) = new;
		else
		{
			while (begin->next != NULL)
				begin = begin->next;
			begin->next = new;
		}
	}
	
}
