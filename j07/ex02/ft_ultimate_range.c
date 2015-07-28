/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 14:25:12 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/17 15:11:48 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range = NULL;
		return (0);
	}
	range[0] = (int*)malloc(sizeof(*range[0]) * (diff + 1));
	while (i < diff)
	{
		range[0][i] = min + i;
		i++;
	}
	return (diff);
}
