/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: team0420 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 18:04:17 by mwuckert          #+#    #+#             */
/*   Updated: 2019/01/21 21:48:35 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int			fillit(const int fd)
{
	char		**tetra;
	int			i;

	i = 0;
	tetra = 0;
	if (!(tetra = ft_valid_file(fd, tetra)))
		return (0);
	ft_change_figure_position(tetra);
	if (!ft_valid_figure(tetra))
	{
		ft_arraydel((void**)tetra);
		ft_memdel((void**)&tetra);
		return (0);
	}
	if (!(tetra = ft_create_finish_map(tetra)))
		return (0);
	ft_figure_color(tetra, 'A');
	ft_build_square(tetra);
	while (*(tetra + i))
	{
		if (i % 16 == 0)
			ft_putchar('\n');
		ft_putstr(*(tetra + i++));
		ft_putchar('\n');
	}
	ft_arraydel((void**)tetra);
	ft_memdel((void**)&tetra);
	return (1);
}
