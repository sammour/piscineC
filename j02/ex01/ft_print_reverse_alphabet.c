/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 02:16:40 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/10 13:37:47 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_reverse_alphabet(void)
{
	char a;

	a = 0;
	while (a != 26)
	{
		ft_putchar(122 - a);
		a += 1;
	}
}
