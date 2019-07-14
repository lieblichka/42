/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_house.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 14:52:01 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/21 14:52:06 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_clear_house(char **tetra)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	c = ft_whose_house(tetra);
	while (i < 16)
	{
		j = 0;
		while (tetra[i][j] != 0)
			if (tetra[i][j] != c && tetra[i][j] != '.')
				tetra[i][j++] = '.';
			else
				j++;
		i++;
	}
}
