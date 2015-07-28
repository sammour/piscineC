/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 18:39:20 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/25 20:19:09 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void			*btree_search_item(t_btree *root, void *data_ref,
									int (*cmpf)(void *, void *))
{
	t_btree		*res;

	res = NULL;
	if (root == NULL)
		return (NULL);
	else if ((res = btree_search_item(root->left, data_ref, cmpf)) != NULL)
		return (res);
	else if (cmpf(root->item, data_ref) == 0)
		return (root);
	else if ((res = btree_search_item(root->right, data_ref, cmpf)) != NULL)
		return (res);
	else
		return (NULL);
}
