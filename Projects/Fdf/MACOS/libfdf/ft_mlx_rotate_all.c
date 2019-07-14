/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_rotate_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 17:59:58 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 19:10:04 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_mlx_rotate_all(t_mlx *mlx1, t_mlx *mlx2, t_mlxbox *mlx_box)
{
	t_mlx	iso1;
	t_mlx	iso2;
	t_point p1;
	t_point p2;

	iso1.point = &p1;
	iso2.point = &p2;
	(*iso1.point).color = (*(*mlx1).point).color;
	(*iso2.point).color = (*(*mlx2).point).color;
	ft_mlx_rotate_x(mlx1, &iso1, mlx_box);
	ft_mlx_rotate_x(mlx2, &iso2, mlx_box);
	ft_mlx_rotate_y(mlx1, &iso1, mlx_box);
	ft_mlx_rotate_y(mlx2, &iso2, mlx_box);
	ft_mlx_rotate_z(&iso1, &iso1, mlx_box);
	ft_mlx_rotate_z(&iso2, &iso2, mlx_box);
	(*iso1.point).x += (*(*mlx_box).params).start.x;
	(*iso1.point).y += (*(*mlx_box).params).start.y;
	(*iso2.point).x += (*(*mlx_box).params).start.x;
	(*iso2.point).y += (*(*mlx_box).params).start.y;
	ft_put_mlx_line(&iso1, &iso2, mlx_box);
}
