/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:49:10 by lfallet           #+#    #+#             */
/*   Updated: 2020/12/05 12:49:14 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_insert_data(t_btree **root, void *item,
													int (*cmpf)(void *, void *))
{
	t_btree *tree;

	if (cmpf == NULL)
		return ;
	tree = *root;
	if (*root != NULL)
	{
		if (cmpf(item, tree->item) < 0)
			btree_insert_data(&tree->left, item, cmpf);
		else
			btree_insert_data(&tree->right, item, cmpf);
	}
	else
		*root = btree_create_node(item);
	return ;
}
