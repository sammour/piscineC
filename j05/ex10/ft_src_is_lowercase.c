/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_src_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 19:51:41 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/15 19:53:07 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (low(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
