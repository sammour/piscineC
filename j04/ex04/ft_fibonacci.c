/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 16:42:06 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/14 16:57:00 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index == 1 || index == 2)
		return (1);
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}
