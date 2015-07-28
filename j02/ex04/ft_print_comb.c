/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 14:13:29 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/10 22:12:03 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_chiant(char t, char y, char u)
{
	while (t != 55 || y != 56 || u != 57)
	{
		ft_putchar(t);
		ft_putchar(y);
		ft_putchar(u);
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(t);
	ft_putchar(y);
	ft_putchar(u);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 48;
	while (a != 56)
	{
		b = a + 1;
		while (b != 57)
		{
			c = b + 1;
			while (c != 58)
			{
				ft_chiant(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
