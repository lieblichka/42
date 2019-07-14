/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_move_left.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:29:11 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/21 11:44:46 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_figure_move_left(char **tetra, int square, int n)
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
		ft_figure_move_left(tetra, i, n);
	}
}
