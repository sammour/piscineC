/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_to_bsq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 17:24:36 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/30 19:10:32 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_set_to_bsq(t_bsq *env)
{
	if (!(env->buf = (char*)malloc(sizeof(char) * 1)))
		return ;
	env->buf[0] = 0;
	while (env->buf[0] != '\n')
		env->lu = read(env->fd, env->buf, 1);
	free(env->buf);
}

int		ft_close(t_bsq *env)
{
	if ((close(env->fd)) == -1)
		return (-1);
	return (0);
}
