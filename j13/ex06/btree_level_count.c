/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 20:03:01 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/25 20:14:40 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	if (root == NULL)
		return (0);
	else if (btree_level_count(root->left) > btree_level_count(root->right))
		return (1 + btree_level_count(root->left));
	else
		return (1 + btree_level_count(root->right));
}
