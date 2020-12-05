/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:50:07 by lfallet           #+#    #+#             */
/*   Updated: 2020/12/05 12:50:09 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	btree_level_count(t_btree *root)
{
	static size_t	level_left;
	static size_t	level_right;

	if (root == NULL)
		return (0);
	if (root->left != NULL)
		level_left = btree_level_count(root->left);
	if (root->right != NULL)
		level_right = btree_level_count(root->right);
	return ((level_left > level_right) ? level_left + 1 : level_right + 1);
}
