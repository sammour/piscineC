/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 17:34:27 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/15 18:40:16 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strlowcase(char *str);

int len(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

void ft_putstr(char *s)
{
	write(1, s, len(s));
}


int main(void)
{
	char s[] = "ABCDEFG";
	char *lows;

	lows = ft_strlowcase(s);
	ft_putstr(lows);
	return (0);
}
