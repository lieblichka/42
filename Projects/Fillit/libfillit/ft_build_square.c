/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 00:29:43 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/22 15:13:10 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"


int		ft_check_cross_all(char **tetra)
{
	char **addr;
	char c;

	addr = tetra;
	c = ft_whose_house(addr);
	while (ft_whose_house(tetra) != 'A')
		tetra -= 16;
	while (ft_whose_house(tetra) != c + 1)
		if (ft_check_cross(addr, tetra))
			return (1);
		else
			tetra += 16;
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
	{
		ft_puts_figure(tetra);
		ft_putchar('\n');
		ft_puts_figure(tetra + 16);
		ft_putchar('\n');
		if (ft_check_cross_all(tetra))
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
		else
			ft_build_square(tetra + 16);
	}
}
