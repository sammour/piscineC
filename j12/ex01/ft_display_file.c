/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 11:05:19 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/24 11:21:24 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int			ft_display_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUFSIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}
	while ((ret = read(fd, buf, BUFSIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (-2);
	}
	return (0);
}
