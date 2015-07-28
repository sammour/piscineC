/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 21:50:34 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/22 23:00:43 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*params;
	t_list		**begin;

	i = 1;
	params = NULL;
	if (ac == 0)
		return (NULL);
	params = ft_create_elem(av[0]);
	begin = &params;
	while (i < ac)
	{
		params->next = ft_create_elem(av[i]);
		params = params->next;
		i++;
	}
	params = (*begin);
	return (params);
}
