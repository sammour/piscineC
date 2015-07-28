/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 19:43:19 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/15 19:49:25 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_src_is_numeric(char *src)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (num(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
