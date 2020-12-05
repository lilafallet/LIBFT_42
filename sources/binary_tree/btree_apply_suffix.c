/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:48:30 by lfallet           #+#    #+#             */
/*   Updated: 2020/12/05 12:48:32 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_item_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL || applyf == NULL)
		return ;
	btree_apply_item_suffix(root->left, applyf);
	btree_apply_item_suffix(root->right, applyf);
	applyf(root->item);
}

void	btree_apply_node_suffix(t_btree *root, void (*applyf)(t_btree *))
{
	if (root == NULL || applyf == NULL)
		return ;
	btree_apply_node_suffix(root->left, applyf);
	btree_apply_node_suffix(root->right, applyf);
	applyf(root);
}
