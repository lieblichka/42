/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_move_mouse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 19:21:45 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 15:57:40 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static void	ft_mouse_move(int x, int y, t_mlxbox *mlx_box)
{
	t_coord mouse;

	mouse.x = (*(*mlx_box).params).mouse.x;
	mouse.y = (*(*mlx_box).params).mouse.y;
	(*(*mlx_box).params).start.x -= mouse.x - x;
	(*(*mlx_box).params).start.y -= mouse.y - y;
	(*(*mlx_box).params).mouse.x = x;
	(*(*mlx_box).params).mouse.y = y;
}

static void	ft_mouse_rotate(int x, int y, t_mlxbox *mlx_box)
{
	(*(*mlx_box).params).axis.y += x - (*(*mlx_box).params).mouse.x;
	(*(*mlx_box).params).axis.x += y - (*(*mlx_box).params).mouse.y;
	(*(*mlx_box).params).mouse.x = x;
	(*(*mlx_box).params).mouse.y = y;
}

static void	ft_rotate_around(int x, int y, t_mlxbox *mlx_box)
{
	(*(*mlx_box).params).axis.z += x - (*(*mlx_box).params).mouse.x;
	(*(*mlx_box).params).axis.z += y - (*(*mlx_box).params).mouse.y;
	(*(*mlx_box).params).mouse.x = x;
	(*(*mlx_box).params).mouse.y = y;
}

int			ft_mlx_move_mouse(int x, int y, t_mlxbox *mlx_box)
{
	if ((*(*mlx_box).params).mouse.third_button)
		ft_rotate_around(x, y, mlx_box);
	if ((*(*mlx_box).params).mouse.left_button)
		ft_mouse_move(x, y, mlx_box);
	if ((*(*mlx_box).params).mouse.right_button)
		ft_mouse_rotate(x, y, mlx_box);
	return (1);
}
