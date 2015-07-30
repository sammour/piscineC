/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chains.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 19:21:11 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/30 19:31:43 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_chain	*ft_create_chain(char *line)
{
	t_chain *chain;

	chain = NULL;
	if (!(chain = (t_chain*)malloc(sizeof(t_chain))))
		return (NULL);
	if (!(chain->line = (char*)malloc(sizeof(char) * (ft_strlen(line) + 1))))
		return (NULL);
	chain->line = line;
	chain->next = NULL;
	return (chain);
}

void	ft_add_chain(t_chain *begin, char *line)
{
	t_chain *tmp;

	tmp = begin;
	if (tmp == NULL)
	{
		begin = ft_create_chain(line);
		begin->next = begin;
		return ;
	}
	while (tmp->next != begin)
		tmp = tmp->next;
	tmp->next = ft_create_chain(line);
	tmp = tmp->next;
	tmp->next = begin;
}

void	ft_turnover(t_chain *begin, char *line)
{
	t_chain *tmp;

	tmp = begin;
	begin = begin->next;
	tmp->line = line;
}

void	ft_n_plus(t_bsq *env, t_chain *begin)
{
	env->buf[env->lu] = '\0';
	if (env->buf[env->lu - 1] != '\n')
	{
		write(2, "map error\n", 10);
		return ;
	}
	env->pos = 0;
	ft_add_chain(begin, env->buf);
	env->n++;
}

void	ft_changeline(t_bsq *env, t_chain *begin)
{
	if ((env->lu = read(env->fd, env->buf, env->size)) == 0)
		return ;
	env->buf[env->lu] = '\0';
	if (env->buf[env->lu - 1] != '\n')
	{
		write(2, "map error\n", 10);
		return ;
	}
	env->pos = 0;
	ft_turnover(begin, env->buf);
	env->parcouru++;
}
