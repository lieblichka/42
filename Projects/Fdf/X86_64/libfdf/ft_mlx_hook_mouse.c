/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_hook_mouse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 19:23:02 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/24 20:49:35 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

int	ft_mlx_hook_mouse(int button, int x, int y, t_mlxbox *mlx_box)
{
	if (button == 1 || button == 2 || button == 3)
	{
		(*(*mlx_box).params).mouse.x = x;
		(*(*mlx_box).params).mouse.y = y;
	}
	if (button == 1 && y >= 0)
		(*(*mlx_box).params).mouse.left_button = 1;
	if (button == 2 && y >= 0)
		(*(*mlx_box).params).mouse.right_button = 1;
	if (button == 3 && y >= 0)
		(*(*mlx_box).params).mouse.third_button = 1;
	if (button == 4 || button == 5)
		(*(*mlx_box).params).mouse.scroll = 1;
	if (button == 4 && (*(*mlx_box).params).mouse.right_button)
		(*(*mlx_box).params).z -= 1;
	else if (button == 4)
		(*(*mlx_box).params).distance -= 1;
	else if (button == 5 && (*(*mlx_box).params).mouse.right_button)
		(*(*mlx_box).params).z += 1;
	else if (button == 5)
		(*(*mlx_box).params).distance += 1;
	return (1);
}
