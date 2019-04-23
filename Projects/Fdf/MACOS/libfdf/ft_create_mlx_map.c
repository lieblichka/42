/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_mlx_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 11:01:43 by mwuckert          #+#    #+#             */
/*   Updated: 2019/04/20 18:11:26 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static t_mlx	*ft_allocate_mlx_row(int width)
{
	t_point point;
	t_mlx	*mlx;
	t_mlx	*mlx_addr;

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

static int		ft_allocate_mlx_elems(char **map, t_mlx **mlx_map, int width_row)
{
	if (map && *map)
		if (!(*mlx_map = ft_allocate_mlx_row(width_row)))
			return (0);
	if (*(map + 1))
		return (ft_allocate_mlx_elems(map + 1, mlx_map + 1, width_row));
	return (1);
}

static int		ft_sizeof_map(char **map)
{
	int length;

	length = 0;
	while (*map++)
		length++;
	return (length);
}

t_mlx			**ft_create_mlx_map(char **map)
{
	int		size_x;
	int		size_y;
	t_mlx	**mlx_map;

	size_x = ft_countwordc(*map, ' ');
	size_y = ft_sizeof_map(map);
	if (!(mlx_map = ft_memalloc(sizeof(t_list*) * (size_y + 1))))
		return (0);
	if (!ft_allocate_mlx_elems(map, mlx_map, size_x))
	{
		ft_del_mlx_map(mlx_map);
		return (0);
	}
	return (mlx_map);
}
