/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:48:07 by lfallet           #+#    #+#             */
/*   Updated: 2020/12/05 12:48:10 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_item_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL || applyf == NULL)
		return ;
	applyf(root->item);
	btree_apply_item_prefix(root->left, applyf);
	btree_apply_item_prefix(root->right, applyf);
}

void	btree_apply_node_prefix(t_btree *root, void (*applyf)(t_btree *))
{
	if (root == NULL || applyf == NULL)
		return ;
	applyf(root);
	btree_apply_node_prefix(root->left, applyf);
	btree_apply_node_prefix(root->right, applyf);
}
