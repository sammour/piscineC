/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 19:54:30 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/15 19:57:39 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (upper(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
