/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 18:45:22 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/15 19:41:50 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alphanum(char c)
{
	if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (alphanum(str[i]) == 0)
		{
			if (min(str[i + 1]) == 1)
				str[i + 1] -= 32;
		}
		else if (alphanum(str[i]) == 1)
		{
			if (min(str[i + 1]) == 0)
				str[i + 1] += 32;
		}
		i++;
	}
	return (str);
}
