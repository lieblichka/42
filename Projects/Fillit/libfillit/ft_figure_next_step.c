/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_next_step.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 23:53:45 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/18 04:40:15 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_extreme_vertical(int square, char **tetra)
{
	int j;

	j = square;
	while (square--)
		if (tetra[square][j - 1] != '.')
			return (1);
	return (0);
}

static int		ft_extreme_horisontal(int square, char **tetra)
{
	int j;

	j = square;
	while (square--)
		if (tetra[j - 1][square] != '.')
			return (1);
	return (0);
}

static void		ft_figure_move_right(char **tetra, int square)
{
	int i;

	i = 0;
	while (i < square)
	{
		ft_memmove(*(tetra + i) + 1, *(tetra + i), square - 1);
		*(*(tetra + i++) + 0) = '.';
	}
}

static void		ft_figure_move_down_left(char **tetra, int square, int n)
{
	int i;
	int j;

	i = square;	
	while (square--)
		if (*(*(tetra + square) + 0) != '.')
			n = 0;
	j = 0;
	if (n)
	{
		while (j < i)
		{
			ft_strcpy(*(tetra + j), *(tetra + j) + 1);
			*(*(tetra + j++) + i - 1) = '.';
		}
		ft_figure_move_down_left(tetra, i, n);
	}
}

int				ft_figure_next_step(char **tetra)
{
	int square;

	square = ft_strlen(*(tetra + 0));
	if (ft_extreme_vertical(square, tetra) &&
			ft_extreme_horisontal(square, tetra))
		return (0);
	if (!ft_extreme_vertical(square, tetra))
		ft_figure_move_right(tetra, square);
	else
	{
		ft_figure_move_down_left(tetra, square, 1);
		while (square-- > 1)
			ft_swap_point((void***)(tetra + square), (void***)(tetra + square - 1));
	}
	return (1);
}
