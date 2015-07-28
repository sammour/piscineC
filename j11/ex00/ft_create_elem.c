/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 13:54:31 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/22 16:59:15 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_create_elem(void *data)
{
	t_list		*nul;
	t_list		*new;

	nul = NULL;
	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	if (new)
	{
		new->data = data;
		new->next = nul;
	}
	return (new);
}
