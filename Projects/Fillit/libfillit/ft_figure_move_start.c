/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_move_start.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtreutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:25:31 by dtreutel          #+#    #+#             */
/*   Updated: 2019/01/21 12:09:02 by dtreutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_figure_move_start(char **tetra)
{
	int square;

	square = ft_strlen(*tetra);
	ft_figure_move_left(tetra, square, 1);
	ft_figure_move_up(tetra, square, 1);
}
