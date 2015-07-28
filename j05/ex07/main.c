/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 04:48:17 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/15 14:33:47 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ft_strlowcase.c>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (str)
	{
		ft_putchar(*str);
		str++
	}
}

int main(void)
{
	char c;
	char **tab;
	
	c = 0;
	tab[0] = "frecfgrdfgdQREEQRV33423423";
	tab[1] = "0";
	ft_putstr(ft_strlowcase(tab[0]));
	return 0;
}
