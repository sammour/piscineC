/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 22:24:23 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/22 12:46:22 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_pos(int *tab, int l, int i, int (*g)(int, int))
{
	while (i < l - 1)
	{
		if (g(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int			ft_neg(int *tab, int l, int i, int (*g)(int, int))
{
	while (i < l - 1)
	{
		if (g(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
		{
			i++;
			return (ft_pos(tab, length, i, f));
		}
		else
		{
			if (f(tab[i], tab[i + 1]) > 0)
			{
				i++;
				return (ft_neg(tab, length, i, f));
			}
			i++;
		}
	}
	return (1);
}
