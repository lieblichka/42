/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_mlx_horisontal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:22:17 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/19 21:28:40 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

void	ft_put_mlx_horisontal(t_mlxbox *mlx_box)
{
	int		i;
	t_mlx	*mlx1;
	t_mlx	*mlx2;

	i = -1;
	while (*((*mlx_box).mlx_map + ++i))
	{
		mlx1 = *((*mlx_box).mlx_map + i);
		mlx2 = (*mlx1).next;
		while (mlx1 && (*mlx1).next)
		{
			ft_mlx_rotate_all(mlx1, mlx2, mlx_box);
			mlx1 = (*mlx1).next;
			mlx2 = (*mlx1).next;
		}
	}
}
