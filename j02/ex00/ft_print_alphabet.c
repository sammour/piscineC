/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 22:17:03 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/10 13:47:26 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_alphabet(void)
{
	char a;

	a = 0;
	while (a != 26)
	{
		ft_putchar(a + 97);
		a += 1;
	}
}
