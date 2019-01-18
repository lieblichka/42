/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_figure_position.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: team0420 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 11:32:44 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/17 16:13:45 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

static void	ft_change_to_left(char **tetra)
{
	while (!(*(*(tetra + 0) + 0) == '#' || *(*(tetra + 1) + 0) == '#'
		|| *(*(tetra + 2) + 0) == '#' || *(*(tetra + 3) + 0) == '#'))
	{
		ft_strncpy(*(tetra + 0), &*(*(tetra + 0) + 1), 3);
		tetra[0][3] = '.';
		ft_strncpy(*(tetra + 1), &*(*(tetra + 1) + 1), 3);
		tetra[1][3] = '.';
		ft_strncpy(*(tetra + 2), &*(*(tetra + 2) + 1), 3);
		tetra[2][3] = '.';
		ft_strncpy(*(tetra + 3), &*(*(tetra + 3) + 1), 3);
		tetra[3][3] = '.';
	}
	if (*(tetra + 4) != 0)
		ft_change_to_left(&tetra[4]);
}

static void	ft_change_to_up(char **tetra)
{
	while (!ft_strchr(*tetra, '#'))
	{
		ft_swap_point((void***)(tetra + 0), (void***)(tetra + 1));
		ft_swap_point((void***)(tetra + 1), (void***)(tetra + 2));
		ft_swap_point((void***)(tetra + 2), (void***)(tetra + 3));
	}
	if (*(tetra + 4) != 0)
		ft_change_to_up(&tetra[4]);
}

void		ft_change_figure_position(char **tetra)
{
	ft_change_to_up(tetra);
	ft_change_to_left(tetra);
}
