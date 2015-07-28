/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 00:58:06 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/24 12:26:44 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int			display_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUFSIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
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

int			main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.");
		return (-1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (-2);
	}
	display_file(argv[1]);
	return (argc);
}
