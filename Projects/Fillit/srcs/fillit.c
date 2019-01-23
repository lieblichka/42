/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: team0420 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 18:04:17 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/23 12:25:56 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int			fillit(const int fd)
{
	char		**tetra;
	int			recursion;

	tetra = 0;
	recursion = 0;
	if (!(tetra = ft_valid_file(fd, tetra)))
		return (0);
	ft_change_figure_position(tetra);
	if (!ft_valid_figure(tetra) && ft_del_square(tetra))
		return (0);
	if (!(tetra = ft_create_finish_map(tetra)))
		return (0);
	if (*(tetra + 4) == 0)
	{
		ft_puts_one(tetra);
		return (ft_del_square(tetra));
	}
	if (!ft_include_stick(tetra))
		ft_decrease_square(tetra);
	ft_figure_color(tetra, 'A');
	ft_min_square(tetra);
	while (!recursion)
		recursion = ft_build_square(tetra);
	ft_puts_square(tetra);
	return (ft_del_square(tetra));
}
