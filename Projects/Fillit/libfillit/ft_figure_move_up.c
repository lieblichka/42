/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_move_up.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:50:33 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/21 12:29:07 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_figure_move_up(char **tetra, int square, int n)
{
	int i;

	i = -1;
	while (*(*tetra + ++i))
	{
		if (*(*tetra + i) != '.')
			n = 0;
	}
	if (n)
	{
		square = -1;
		while (++square < i - 1)
			ft_swap_point((void***)(tetra + square),
					(void***)(tetra + square + 1));
		ft_figure_move_up(tetra, i, n);
	}
}
