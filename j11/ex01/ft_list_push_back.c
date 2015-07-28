/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 14:22:42 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/22 21:44:10 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*begin;
	t_list	*last;

	last = NULL;
	&begin = begin_list;
	last = ft_create_elem(data);
	if (begin == NULL)
	{
		begin = last;
	}
	else
	{
		while (begin->next != NULL)
			begin = (*begin_list)->next;
		begin->next = last;
	}
}
