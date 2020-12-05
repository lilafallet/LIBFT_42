/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_nodes_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:50:16 by lfallet           #+#    #+#             */
/*   Updated: 2020/12/05 12:50:18 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	btree_nodes_count(t_btree *root)
{
	static size_t	node_count;

	if (root == NULL)
		return (0);
	node_count++;
	btree_nodes_count(root->left);
	btree_nodes_count(root->right);
	return (node_count);
}
