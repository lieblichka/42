/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_iso_point.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 08:55:31 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/22 19:05:23 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_mlx_iso_point(t_mlx *mlx, t_mlx *iso, t_mlxbox *mlx_box)
{
	int point;

	(*(*iso).point).z = (*(*mlx).point).z * ((*(*mlx_box).params).distance
		* (*(*mlx_box).params).z) / 45;
	(*(*iso).point).x = (*(*mlx).point).x * (*(*mlx_box).params).distance;
	(*(*iso).point).y = (*(*mlx).point).y * (*(*mlx_box).params).distance;
	point = (*(*iso).point).x;
	(*(*iso).point).x = ((*(*iso).point).x - (*(*iso).point).y)
		* cos((*(*mlx_box).params).angle / RADIAN);
	(*(*iso).point).y = (point + (*(*iso).point).y)
		* sin((*(*mlx_box).params).angle / RADIAN);
}
