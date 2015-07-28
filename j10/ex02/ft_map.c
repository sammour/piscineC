/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 21:15:18 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/22 14:27:17 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*out;

	if (!(out = (int*)malloc(sizeof(int) * length)))
		return (NULL);
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}
