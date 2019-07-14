/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_rotate_z.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 16:51:08 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 14:20:58 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_mlx_rotate_z(t_mlx *mlx, t_mlx *iso, t_mlxbox *mlx_box)
{
	int point1;
	int point2;

	point1 = (*(*mlx).point).x;
	point2 = (*(*mlx).point).y;
	(*(*iso).point).x = point1 * cos((*(*mlx_box).params).axis.z / RADIAN)
		- point2 * sin((*(*mlx_box).params).axis.z / RADIAN);
	(*(*iso).point).y = point1 * sin((*(*mlx_box).params).axis.z / RADIAN)
		+ point2 * cos((*(*mlx_box).params).axis.z / RADIAN);
	(*(*iso).point).color = (*(*mlx).point).color;
}
