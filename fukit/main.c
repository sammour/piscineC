/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 00:36:59 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/30 19:35:46 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	give_values(t_bsq *env)
{
	int i;

	i = 0;
	if (!(env->buf = (char*)malloc(sizeof(char) * env->size)))
		return ;
	env->lu = read(env->fd, env->buf, env->size);
	while (env->buf[0] >= '0' && env->buf[i] <= '9')
	{
		env->lanes = env->lanes * 10 + (env->buf[0] - 48);
		env->lu = read(env->fd, env->buf, env->size);
	}
	env->vide = env->buf[0];
	env->lu = read(env->fd, env->buf, env->size);
	env->obstacle = env->buf[0];
	env->lu = read(env->fd, env->buf, env->size);
	env->plein = env->buf[0];
	env->lu = read(env->fd, env->buf, env->size);
	if (env->buf[0] != '\n')
		return ;
	ft_firstline(env);
}

int		main(int argc, char **argv)
{
	t_bsq	*env;

	if (!(env = create_env(argc)))
		return (0);
	if ((env->fd = open(argv[1], O_RDONLY)) == -1)
		return (0);
	give_values(env);
	close(env->fd);
	env->j = 0;
	env->count = 0;
	env->fd = open(argv[1], O_RDONLY);
	ft_set_to_bsq(env);
	ft_printit(env);
	return (0);
}
