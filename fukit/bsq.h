/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 09:55:52 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/30 19:30:55 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	s_bsq
{
	int				fd;
	int				size;
	int				lu;
	int				lanes;
	int				parcouru;
	int				x;
	int				next;
	int				res;
	int				pos;
	int				old;
	int				*tab;
	int				n;
	int				obs;
	int				count;
	int				i;
	int				j;
	char			*buf;
	char			vide;
	char			obstacle;
	char			plein;
}				t_bsq;

typedef struct	s_chain
{
	struct s_chain	*next;
	char			*line;
}				t_chain;

void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			ft_set_to_bsq(t_bsq *env);
int				ft_solve(t_bsq *env, t_chain *begin);
t_bsq			*create_env(int ac);
void			give_values(t_bsq *env);
void			ft_firstline(t_bsq *env);
void			ft_add_chain(t_chain *begin, char *line);
void			ft_n_plus(t_bsq *env, t_chain *begin);
void			ft_changeline(t_bsq *env, t_chain *begin);
void			ft_maperror(void);
void			ft_magic_square(t_bsq *env);
void			ft_printit(t_bsq *env);
void			ft_test(t_bsq *env, t_chain *begin);

#endif
