/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 16:03:46 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/14 23:31:45 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
