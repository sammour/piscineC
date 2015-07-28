/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 20:16:32 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/15 20:29:44 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		visible(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

int		ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (visible(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
