/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 17:42:23 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/30 19:36:36 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_printit(t_bsq *env)
{
	env->i = 0;
	env->pos = env->res;
	ft_magic_square(env);
	if (!(env->buf = (char*)malloc(sizeof(char) * env->size + 1)))
		return ;
	while ((env->lu = read(env->fd, env->buf, env->size)))
	{
		env->buf[env->lu] = '\0';
		while (env->buf[env->i])
		{
			if (env->count + env->i == env->tab[env->j])
			{
				env->buf[env->i] = env->plein;
				env->j++;
			}
			env->i++;
		}
		ft_putstr(env->buf);
		env->count += env->lu;
		env->i = 0;
	}
	free(env->buf);
	if (close(env->fd) == -1)
		ft_putstr("error while closing file");
}
