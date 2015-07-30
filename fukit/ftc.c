/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 19:32:08 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/30 19:35:03 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_strlen(char *str)
{
	int		l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
