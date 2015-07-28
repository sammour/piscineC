/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 11:05:30 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/24 11:47:48 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int			main(int argc, char **argv)
{
	int		i;
	int		read;

	i = 1;
	if (argc == 1)
	{
		read = ft_read0();
		return (-1);
	}
	while (i < argc)
	{
		if (t_display_file(argv[i]) < 0)
		{
			ft_putstr("cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": No such file or directory")
		}
		ft_putstr("\n");
		i++;
	}
	return (0);
}
