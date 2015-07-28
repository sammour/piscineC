/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sblancha <sblancha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 15:33:58 by sblancha          #+#    #+#             */
/*   Updated: 2015/07/17 15:57:57 by sblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			totlen(int n, char **str)
{
	int		len;
	int		i;
	int		res;

	len = 0;
	i = 0;
	res = 0;
	while (i < n)
	{
		while (str[i][len])
			len++;
		i++;
		res = res + len;
		len = 0;
	}
	return (res);
}

char		*ft_concat_params(int argc, char **argv);
{
	int		itot;
	int		i;
	char	*res;
	int		len;

	itot = 0;
	i = 0;
	len = totlen(argc, argv) + argc + 1;
	res = (char*)malloc(sizeof(char) * (len));
	while (i < argc)
	{
		while (argv[i])
		{
			res[itot] = argv[i][j];
			itot++;
			j++;
		}
		j = 0;
		res[itot] = '\n';
		itot++;
		i++;
	}
	res[itot] = '\0';
	return (res);
}
