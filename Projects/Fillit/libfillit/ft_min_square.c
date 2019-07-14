/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:51:42 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/22 19:59:01 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_min_square(char **tetra)
{
	int		i;

	i = 0;
	while (*(tetra + i) != 0)
		i++;
	i /= 16;
	i *= 4;
	while (!ft_sqrt(i))
		i++;
	i = ft_sqrt(i);
	while ((int)ft_strlen(*tetra) < i)
		ft_increase_square(tetra);
}
