/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 15:47:35 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/14 16:55:48 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterate_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	i = 0;
	res = 1;
	while (i != power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
