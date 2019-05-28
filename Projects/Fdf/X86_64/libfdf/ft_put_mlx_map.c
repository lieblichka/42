/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_mlx_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:31:36 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/06 21:02:30 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

static void	ft_put_mlx_vertical(t_mlx **mlx_map,
		t_mlxstat *mlx_stat, t_params *p)
{
	int		i;
	t_mlx	*mlx1;
	t_mlx	*mlx2;

	i = -1;
	while (*(mlx_map + ++i))
	{
		if (*(mlx_map + i + 1))
		{
			mlx1 = *(mlx_map + i);
			mlx2 = *(mlx_map + i + 1);
			while (mlx1 && mlx2)
			{
				ft_put_mlx_line(mlx1, mlx2, mlx_stat, p);
				mlx1 = (t_mlx*)(*mlx1).next;
				mlx2 = (t_mlx*)(*mlx2).next;
			}
		}
	}
}

static void	ft_put_mlx_horisontal(t_mlx **mlx_map,
		t_mlxstat *mlx_stat, t_params *p)
{
	int		i;
	t_mlx	*mlx;

	i = -1;
	while (*(mlx_map + ++i))
	{
		mlx = *(mlx_map + i);
		while (mlx && (*mlx).next)
		{
			ft_put_mlx_line(mlx, (t_mlx*)(*mlx).next, mlx_stat, p);
			mlx = (*mlx).next;
		}
	}
}

int			ft_put_mlx_map(t_mlxbox *mlx_box)
{
	mlx_clear_window((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win);
	ft_put_mlx_vertical((*mlx_box).mlx_map,
			(*mlx_box).mlx_stat, (*mlx_box).params);
	ft_put_mlx_horisontal((*mlx_box).mlx_map,
			(*mlx_box).mlx_stat, (*mlx_box).params);
	return (1);
}
