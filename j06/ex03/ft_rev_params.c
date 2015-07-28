/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 16:31:18 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/16 16:31:31 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchard(char c);
int		len(char *s)
{
	int	i;

	while (s[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i != 0 && i < n)
	{
		while (j < len(argv[i]))
		{
			ft_putchar(argv[len(argv[i]) - j]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
