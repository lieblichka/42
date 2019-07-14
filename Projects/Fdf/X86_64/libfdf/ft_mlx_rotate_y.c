/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_rotate_y.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 19:09:51 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 14:17:31 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_mlx_rotate_y(t_mlx *mlx, t_mlx *iso, t_mlxbox *mlx_box)
{
	int point1;

	point1 = (*(*mlx).point).x * (*(*mlx_box).params).distance
		- ((*(*mlx_box).params).size.x * (*(*mlx_box).params).distance) / 2;
	(*(*iso).point).x = point1 * cos((*(*mlx_box).params).axis.y / RADIAN)
		+ ((*(*iso).point).z)
			* sin((*(*mlx_box).params).axis.y / RADIAN);
	(*(*iso).point).z = -point1 * sin((*(*mlx_box).params).axis.y / RADIAN)
		+ ((*(*iso).point).z)
			* cos((*(*mlx_box).params).axis.y / RADIAN);
}
