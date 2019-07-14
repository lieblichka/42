/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_mlx_vertical.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:19:16 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/19 20:12:07 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_put_mlx_vertical(t_mlxbox *mlx_box)
{
	int		i;
	t_mlx	*mlx1;
	t_mlx	*mlx2;

	i = -1;
	while (*((*mlx_box).mlx_map + ++i))
	{
		if (*((*mlx_box).mlx_map + i + 1))
		{
			mlx1 = *((*mlx_box).mlx_map + i);
			mlx2 = *((*mlx_box).mlx_map + i + 1);
			while (mlx1 && mlx2)
			{
				ft_mlx_rotate_all(mlx1, mlx2, mlx_box);
				mlx1 = (t_mlx*)(*mlx1).next;
				mlx2 = (t_mlx*)(*mlx2).next;
			}
		}
	}
}
