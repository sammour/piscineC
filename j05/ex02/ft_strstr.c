/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 18:23:38 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/15 16:39:58 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	iocu;
	int	res;

	i = 0;
	iocu = 0;
	while (str[i])
	{
		if (str[i] == to_find[iocu])
		{
			res = i;
			while (str[i] == to_find[iocu])
			{
				iocu++;
				i++;
				if (to_find[iocu] == '\0')
					return (&str[res]);
			}
		}
		i++;
		iocu = 0;
	}
	return (0);
}
