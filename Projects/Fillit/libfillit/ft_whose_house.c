/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whose_house.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 14:22:50 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/21 14:34:03 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

char	ft_whose_house(char **tetra)
{
	char	c;
	int		i;
	int		j;

	c = 'A';
	i = 0;
	while (i < 16)
	{
		j = 0;
		while (tetra[i][j] != 0)
			if (tetra[i][j] > c)
				c = tetra[i][j++];
			else
				j++;
		i++;
	}
	return (c);
}
