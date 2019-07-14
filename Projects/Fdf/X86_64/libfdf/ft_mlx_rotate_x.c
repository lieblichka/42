/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_rotate_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 19:09:51 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/24 14:06:21 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_mlx_rotate_x(t_mlx *mlx, t_mlx *iso, t_mlxbox *mlx_box)
{
	int point1;

	(*(*iso).point).z = ((*(*mlx).point).z * (*(*mlx_box).params).distance
		* (*(*mlx_box).params).z) / 45;
	point1 = (*(*mlx).point).y * (*(*mlx_box).params).distance
		- ((*(*mlx_box).params).size.y * (*(*mlx_box).params).distance) / 2;
	(*(*iso).point).y = point1 * cos((*(*mlx_box).params).axis.x / RADIAN)
		+ ((*(*iso).point).z)
			* sin((*(*mlx_box).params).axis.x / RADIAN);
	(*(*iso).point).z = -point1 * sin((*(*mlx_box).params).axis.x / RADIAN)
		+ ((*(*iso).point).z)
			* cos((*(*mlx_box).params).axis.x / RADIAN);
}
