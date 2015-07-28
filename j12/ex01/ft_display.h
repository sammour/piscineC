/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 01:01:45 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/24 11:43:27 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H
# include <fcntl.h>
# include <unistd.h>
# define BUFSIZE 2

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_display_file(char *file);
int		ft_read0(void);

#endif
