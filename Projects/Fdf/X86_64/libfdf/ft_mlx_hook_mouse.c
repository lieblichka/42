/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_hook_mouse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 19:23:02 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/07 10:51:06 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	
#include "libfdf.h"

static int	ft_mlx_mouse_move(int x, int y, t_mlxbox *mlx_box)
{
	
	if (x > (*(*mlx_box).params).start.x)
		(*(*mlx_box).params).start.x += 1;
	if (y > (*(*mlx_box).params).start.y)
		(*(*mlx_box).params).start.y += 1;
	return (1);
}

int			ft_mlx_hook_mouse(int x, int y, t_mlxbox *mlx_box)
{
	x = 0;
	y = 0;
	mlx_hook((*(*mlx_box).mlx_stat).mlx_win,
			6, 0, &ft_mlx_mouse_move, (void*)mlx_box);
	return (1);
}
