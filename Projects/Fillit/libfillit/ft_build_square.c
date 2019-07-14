/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 00:29:43 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/23 17:36:58 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int		ft_clear_and_step(char **tetra)
{
	ft_clear_house(tetra);
	return (ft_figure_next_step(tetra));
}

char	**ft_event_increase(char **tetra)
{
	ft_figure_move_start(tetra);
	if (ft_whose_house(tetra) == 'A')
		ft_increase_square(tetra);
	else
	{
		ft_clear_and_step(tetra - 16);
		return (tetra - 16);
	}
	return (tetra);
}

int		ft_build_square(char **tetra)
{
	static int i = 0;

	while (ft_check_cross(tetra, tetra + 16))
		if (!ft_figure_next_step(tetra + 16))
		{
			ft_figure_move_start(tetra + 16);
			if (!ft_clear_and_step(tetra))
				tetra = ft_event_increase(tetra);
			if (ft_whose_house(tetra) != 'A')
				tetra = tetra - 16;
		}
	ft_add_figure(tetra);
	if ((tetra += 16) && ++i == 100000 && (i = 1))
	{
		ft_clear_all_house(tetra);
		return (0);
	}
	if (*(tetra + 16) != 0)
		return (ft_build_square(tetra));
	return (1);
}
