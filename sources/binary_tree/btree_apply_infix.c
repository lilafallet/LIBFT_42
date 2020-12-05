/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:47:56 by lfallet           #+#    #+#             */
/*   Updated: 2020/12/05 12:47:59 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_item_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL || applyf == NULL)
		return ;
	btree_apply_item_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_item_infix(root->right, applyf);
}

void	btree_apply_node_infix(t_btree *root, void (*applyf)(t_btree *))
{
	if (root == NULL || applyf == NULL)
		return ;
	btree_apply_node_infix(root->left, applyf);
	applyf(root);
	btree_apply_node_infix(root->right, applyf);
}
