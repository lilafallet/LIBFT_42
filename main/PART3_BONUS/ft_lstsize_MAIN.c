#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	elem1;
	t_list	elem2;
	t_list	elem3;
	t_list	elem4;
	t_list	elem5;
	t_list	elem6;

	lst = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = &elem4;
	elem4.next = &elem5;
	elem5.next = &elem6;
	elem6.next = NULL;
	printf("Elements dans la liste : %d\n", ft_lstsize(lst));
	return (EXIT_SUCCESS);
}
