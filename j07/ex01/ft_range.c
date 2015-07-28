/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 13:35:15 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/17 14:04:25 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	diff;
	int	*range;

	i = 0;
	diff = max - min;
	if (diff <= 0)
		return (0);
	range = (int*)malloc(sizeof(*range) * (diff + 1));
	while (i < diff)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
