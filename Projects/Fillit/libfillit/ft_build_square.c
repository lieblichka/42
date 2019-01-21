/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 00:29:43 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/21 22:08:25 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int		ft_check_cross_one_wother(char **tetra, int figure)
{
	if (ft_check_cross(tetra, tetra + figure))
		return (1);
	if (*(tetra + figure) != 0)
		return (ft_check_cross_one_wother(tetra, figure + 16));
	return (0);
}

int		ft_check_cross_all(char **tetra, char a, char c)
{
	if (ft_check_cross(tetra, tetra + 16))
		return (1);
	if (*(tetra + 16) != 0 && ++a < c)
		return (ft_check_cross_all(tetra + 16, a, c));
	return (0);
}

void	ft_add_figure(char **tetra)
{
	int i;

	i = 0;
	while (*(*tetra + i) != '\0')
	{
		if (*(*tetra + i) != '.')
			*(*(tetra + 16) + i) = *(*tetra + i);
		++i;
	}
	if (*(*(tetra + 1) + 0) != '\0')
		ft_add_figure(tetra + 1);
}

void	ft_build_square(char **tetra)
{
	 
	if (*(tetra + 16) != 0)
		if (ft_check_cross(tetra, tetra + 16))
		{
			if (!ft_figure_next_step(tetra + 16))
			{
				if (ft_whose_house(tetra + 16) == 'B')
				{
					ft_figure_move_start(tetra + 16);
					if (!ft_figure_next_step(tetra))
						ft_increase_square(tetra);
				}
				else
				{
					ft_figure_move_start(tetra + 16);
					ft_build_square(tetra - 16);
				}
			}
			ft_build_square(tetra);
		}
}
