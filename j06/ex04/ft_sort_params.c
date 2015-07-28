/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 16:50:14 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/16 20:58:25 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		culote(char *string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		ft_putchar(string[i]);
		i++;
	}
}

int			cmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void		swap(int nb, char **a)
{
	char	*c;
	int		i;

	i = 0;
	while (i < nb - 1 && i > 0)
	{
		if (cmp(a[i], a[i + 1]) == 1)
		{
			c = a[i];
			a[i] = a[i + 1];
			a[i + 1] = a[i];
		}
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		i;
	int		boucle;

	i = 0;
	boucle = argc - 1;
	while (i < boucle)
	{
		swap(argc, argv);
		i++;
	}
	i = 1;
	while (i < argc && i)
	{
		culote(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
