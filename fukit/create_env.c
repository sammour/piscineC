/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 17:07:10 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/30 19:27:16 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_bsq	*create_env(int ac)
{
	t_bsq	*env;

	env = NULL;
	if (!(env = (t_bsq*)malloc(sizeof(t_bsq))))
		return (NULL);
	env->fd = 0;
	env->size = 1;
	env->lu = 0;
	env->lanes = 0;
	env->parcouru = 0;
	env->x = 0;
	env->next = 0;
	env->res = 0;
	env->pos = 0;
	env->old = 0;
	env->tab = NULL;
	env->n = 1;
	env->obs = -1;
	env->count = ac;
	env->buf = NULL;
	env->vide = 0;
	env->obstacle = 0;
	env->plein = 0;
	return (env);
}

void	ft_firstline(t_bsq *env)
{
	t_chain *first;
	char	*l;
	int		i;

	first = NULL;
	l = malloc(sizeof(char) * 100000);
	i = 0;
	while (env->buf[0] != '\n')
	{
		env->lu = read(env->fd, env->buf, env->size);
		l[i] = env->buf[0];
		i++;
	}
	env->size = i;
	free(env->buf);
	l[i] = '\0';
	env->x = i;
	ft_add_chain(first, l);
	free(l);
	env->buf = malloc(sizeof(char) * env->size);
	ft_test(env, first);
}

void	ft_magic_square(t_bsq *env)
{
	int	i;

	i = 0;
	if (!(env->tab = malloc(sizeof(int) * (env->n * env->n + 1))))
		return ;
	while (i < env->n * env->n)
	{
		env->tab[i] = env->pos + i + (env->x - env->n) * (i / env->n);
		i++;
	}
	env->tab[i] = -1;
}

void	ft_test(t_bsq *env, t_chain *begin)
{
	env->count = 0;
	ft_magic_square(env);
	if ((env->obs = ft_solve(env, begin)) == -1)
	{
		env->res = env->pos + env->parcouru * env->x;
		if ((env->lu = read(env->fd, env->buf, env->size)) == 0)
			return ;
		ft_n_plus(env, begin);
		ft_test(env, begin);
	}
	else if (env->pos + env->obs > env->x - env->n)
	{
		env->old = env->parcouru;
		ft_changeline(env, begin);
		if (env->old == env->parcouru)
			return ;
		env->pos = 0;
		ft_test(env, begin);
	}
	else
	{
		env->pos = env->pos + env->obs;
		ft_test(env, begin);
	}
}

int		ft_solve(t_bsq *env, t_chain *first)
{
	t_chain	*tmp;

	tmp = first;
	env->i = 0;
	env->j = 0;
	while (tmp != first || env->tab[env->i] != -1)
	{
		while (env->j < env->x)
		{
			if (env->count == env->tab[env->i])
			{
				if (env->vide != tmp->line[env->pos + env->j])
				{
					env->obs = env->tab[env->i];
					return (env->obs);
				}
				env->i++;
			}
			env->j++;
			env->count++;
		}
		env->j = 0;
		tmp = tmp->next;
	}
	return (-1);
}
