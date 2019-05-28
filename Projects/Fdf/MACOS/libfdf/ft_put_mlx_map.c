/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_mlx_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:31:36 by mwuckert          #+#    #+#             */
/*   Updated: 2019/05/23 19:58:28 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfdf.h"

int	ft_put_mlx_map(t_mlxbox *mlx_box)
{
	mlx_clear_window((*(*mlx_box).mlx_stat).mlx_ptr,
			(*(*mlx_box).mlx_stat).mlx_win);
	ft_put_mlx_active_man(mlx_box);
	ft_put_mlx_vertical(mlx_box);
	ft_put_mlx_horisontal(mlx_box);
	return (1);
}
