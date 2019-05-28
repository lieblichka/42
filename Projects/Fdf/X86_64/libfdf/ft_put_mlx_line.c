/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_mlx_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 23:11:29 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/07 10:22:28 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_put_mlx_line(t_mlx *mlx1, t_mlx *mlx2,
		t_mlxstat *stat, t_params *params)
{
	t_coord delta;
	t_coord point1;
	t_coord point2;
	t_coord sign;
	t_coord error;

	point1.x = ((*(*mlx1).point).x + (*params).move.x)
		* (*params).distance;
	point1.y = ((*(*mlx1).point).y + (*params).move.y)
		* (*params).distance;
	point2.x = ((*(*mlx2).point).x + (*params).move.x)
		* (*params).distance;
	point2.y = ((*(*mlx2).point).y + (*params).move.y)
		* (*params).distance;
	error.x = point1.x;
	point1.x = (point1.x - point1.y) *
		cos((*params).angle / RADIAN) + (*params).start.x;
	point1.y = (error.x + point1.y) * sin((*params).angle / RADIAN)
		- (mlx1->point->z * (*params).z) + (*params).start.y;
	error.x = point2.x;
	point2.x = (point2.x - point2.y) *
		cos((*params).angle / RADIAN) + (*params).start.x;
	point2.y = (error.x + point2.y) * sin((*params).angle / RADIAN)
		- (mlx2->point->z * (*params).z) + (*params).start.y;
	delta.x = ABS((point2.x - point1.x));
	delta.y = ABS((point2.y - point1.y));
	sign.x = point1.x < point2.x ? 1 : -1;
	sign.y = point1.y < point2.y ? 1 : -1;
	error.x = delta.x - delta.y;
	while ((point1.x != point2.x || point1.y != point2.y)
			&& (point1.x <= WIDTH + 10 && point1.y <= HEIGHT
				&& (point1.x >= -10 && point1.y >= -20)))
	{
		ft_put_mlx_point(point1.x, point1.y, (*(*mlx2).point).color, stat);
		error.y = error.x * 2;
		if (error.y > delta.y * -1)
		{
			error.x -= delta.y;
			point1.x += sign.x;
		}
		if (error.y < delta.x)
		{
			error.x += delta.x;
			point1.y += sign.y;
		}
	}
	ft_put_mlx_point(point2.x, point2.y, mlx2->point->color, stat);
}
