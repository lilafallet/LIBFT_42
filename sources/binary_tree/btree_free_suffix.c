/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_free_suffix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:48:53 by lfallet           #+#    #+#             */
/*   Updated: 2020/12/05 12:48:55 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_free_suffix(t_btree *root)
{
	if (root != NULL)
	{
		btree_free_suffix(root->left);
		btree_free_suffix(root->right);
		if (root->item != NULL)
			free(root->item);
		free(root);
	}
}
