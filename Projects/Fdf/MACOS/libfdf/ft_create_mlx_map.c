/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_mlx_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 11:01:43 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/05 17:52:10 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static t_mlx	*ft_allocate_mlx_row(int width)
{
	t_point	point;
	t_mlx	*mlx;
	t_mlx	*mlx_addr;

	mlx_addr = 0;
	point.x =
		point.y =
			point.z =
				point.color = 0;
	if ((mlx = (t_mlx*)ft_create_mlx(&point)))
	{
		mlx_addr = mlx;
		while (--width)
		{
			if (!((*mlx).next = (t_mlx*)ft_create_mlx(&point)))
				return (0);
			mlx = (*mlx).next;
		}
	}
	return (mlx_addr);
}

static int		ft_allocate_mlx_elems(char **map, t_mlx **mlx_map,
		int width_row)
{
	if (map && *map)
		if (!(*mlx_map = ft_allocate_mlx_row(width_row)))
			return (0);
	if (*(map + 1))
		return (ft_allocate_mlx_elems(map + 1, mlx_map + 1, width_row));
	return (1);
}

t_mlx			**ft_create_mlx_map(char **map, t_params *param)
{
	t_mlx	**mlx_map;

	if (!(mlx_map = ft_memalloc(sizeof(t_list*) *
					((*param).size.y + 1))))
		return (0);
	if (!ft_allocate_mlx_elems(map, mlx_map, (*param).size.x))
	{
		ft_del_mlx_map(mlx_map);
		return (0);
	}
	return (mlx_map);
}
