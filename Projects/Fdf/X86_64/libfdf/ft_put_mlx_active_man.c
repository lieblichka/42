/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_mlx_active_man.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 19:49:09 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/24 16:20:05 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static void	ft_put_mlx_man_message(t_mlxbox *mlx_box, int x, int y)
{
	mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win, x + 55, y + 35, DGRAY, "move");
	mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win, x + 65, y + 60,
				DGRAY, "rotate x y");
	mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win, x + 65, y + 85, DGRAY, "rotate z");
	mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win, x + 75, y + 110, DGRAY *
				ABS(((*(*mlx_box).params).mouse.right_button - 1)), "zoom");
	if ((*(*mlx_box).params).mouse.right_button)
		mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
				(*(*mlx_box).mlx_stat).mlx_win, x + 75, y + 110, DGRAY *
					(*(*mlx_box).params).mouse.right_button, "height change");
}

void		ft_put_mlx_active_man(t_mlxbox *mlx_box)
{
	int x;
	int y;

	x = 25;
	y = 25;
	mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win, x, y, DGRAY, "MOUSE BUTTON");
	mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win, x, y + 35, RED
				- (*(*mlx_box).params).mouse.left_button
					* 0x8A0100, "LEFT: ");
	mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win, x, y + 60, RED
				- (*(*mlx_box).params).mouse.right_button
					* 0x8A0100, "RIGHT: ");
	mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win, x, y + 85, RED
				- (*(*mlx_box).params).mouse.third_button
					* 0x8A0100, "THIRD: ");
	mlx_string_put((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win, x, y + 110, RED
				- (*(*mlx_box).params).mouse.scroll
					* 0x8A0100, "SCROLL: ");
	ft_put_mlx_man_message(mlx_box, x, y);
	(*(*mlx_box).params).mouse.scroll = 0;
}
